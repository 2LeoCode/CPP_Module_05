/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:21:15 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 17:10:06 by lsuardi          ###   ########.fr       */
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
	inline void setKnownForm(int idx, t_formPtr form) { _knownForms[idx] = form; }
	inline void setKnownName(int idx, std::string const & name) { _knownNames[idx] = name; }

	struct InvalidFormException : public std::exception
	{
		const char * what () const throw () { return ("Invalid form"); }
	};

	private:

	t_formPtr _knownForms[4];
	std::string _knownNames[4];
};

# include "SomeIntern.hpp"

#endif
