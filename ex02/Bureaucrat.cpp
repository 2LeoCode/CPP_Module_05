/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:30:10 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/24 10:57:47 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, unsigned int grade) : _name(name), _grade(grade)
{
	if (!grade)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
}

std::ostream & operator<<(std::ostream & out, Bureaucrat & b)
{
	out << '<' << b.getName() << ">, bureaucrat grade <" << b.getGrade() << '>';
	return (out);
}

void Bureaucrat::signForm(Form & form) const
{
	form.beSigned(*this);
}

void Bureaucrat::executeForm(Form & form) const
{
	try { form.execute(*this); }
	catch (std::exception & e) { std::cout << '<' << _name << "> cannot execute <" << form.getName() << "> because <" << e.what() << '>' << std::endl; }
}
