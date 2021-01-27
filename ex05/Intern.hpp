/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:21:15 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/27 17:56:11 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

typedef Form * (*t_formPtr)(std::string const &);

class Intern
{
	public:

	Intern(void);
	~Intern(void) { }

	Form * makeForm(std::string const &, unsigned int const, unsigned int const);
	Form * makeForm(std::string const &, std::string const &);
	inline void setKnownForm(int idx, t_formPtr form) { if ((idx < 0) || (idx > 3)) throw(InvalidIdException()); _knownForms[idx] = form; }
	inline void setKnownName(int idx, std::string const & name) { if ((idx < 0) || (idx > 3)) throw(InvalidIdException()); _knownNames[idx] = name; }
	inline std::string getKnownName(int idx) { if ((idx < 0) || (idx > 3)) throw(InvalidIdException()); return (_knownNames[idx]); }

	struct InvalidFormException : public std::exception
	{
		const char * what () const throw () { return ("Invalid form"); }
	};
	struct InvalidIdException : public std::exception
	{
		const char * what () const throw () { return ("Invalid form ID"); }
	};

	private:

	t_formPtr _knownForms[3];
	std::string _knownNames[3];
};

# include "SomeIntern.hpp"

#endif
