/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:21:15 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/25 01:04:14 by lsuardi          ###   ########.fr       */
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

	struct InvalidFormException : public std::exception
	{
		const char * what () const throw () { return ("Invalid form"); }
	};

	private:

	t_formPtr _knownForms[3];
	std::string _knownNames[3];
};

#endif
