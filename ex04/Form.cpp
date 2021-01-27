/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:15:32 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/25 21:22:37 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, unsigned int const sg, unsigned int const eg) : _name(name), _signGrade(sg), _execGrade(eg), _signed(false)
{
	if (!sg || !eg)
		throw (GradeTooHighException());
	else if ((sg > 150) || (eg > 150))
		throw (GradeTooLowException());
}

std::ostream & operator<<(std::ostream & out, const Form & form)
{
	out << '<' << form.getName() << ">, form state <" << (form.isSigned() ? "signed" : "not signed")\
	<< ">, sign grade <" << form.getSignGrade() << ">, execute grade <" << form.getExecGrade() << '>';
	return (out);
}

void Form::beSigned(const Bureaucrat & b)
{
	if (b.getGrade() > _signGrade)
		throw (GradeTooLowException());
	if (_signed)
		throw (AlreadySignedException());
	std::cout << '<' << b.getName() << "> signs <" << _name << '>' << std::endl;
	_signed = true;
	return ;
}

void Form::execute(Bureaucrat const & b) const
{
	if (!isSigned())
		throw (NotSignedException());
	else if (b.getGrade() > _execGrade)
		throw (GradeTooLowException());
	std::cout << '<' << b.getName() << "> executes <" << _name << '>' << std::endl;
}
