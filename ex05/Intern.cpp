/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:33:02 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 18:38:04 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form * newShrubbery(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

Form * newRobotomy(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

Form * newPresidential(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

Intern::Intern(void)
{
	_knownForms[0] = &newShrubbery;
	_knownForms[1] = &newRobotomy;
	_knownForms[2] = &newPresidential;
	_knownNames[0] = "shrubbery creation";
	_knownNames[1] = "robotomy request";
	_knownNames[2] = "presidential pardon";
}

Form * Intern::makeForm(std::string const & name, unsigned int const sg, unsigned int const eg)
{
	Form * newForm;

	try { newForm = new Form(name, sg, eg); return (newForm); }
	catch (std::exception & e) { std::cout << "Cannot create form <" << name << "> because <" << e.what() << '>' << std::endl; }
	return (nullptr);
}

Form * Intern::makeForm(std::string const & which, std::string const & target)
{
	if (which == "")
		throw (InvalidFormException());
	for (int i = 0; i < 3; i++)
		if (_knownNames[i] == which)
			return ((*_knownForms[i])(target));
	throw (InvalidFormException());
}
