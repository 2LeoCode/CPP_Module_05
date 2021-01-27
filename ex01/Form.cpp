/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 23:15:32 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/24 00:06:12 by lsuardi          ###   ########.fr       */
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
	bool reason = 0;
	if (b.getGrade() > _signGrade)
		reason = 1;
	else if (!_signed)
	{
		std::cout << '<' << b.getName() << "> signs <" << _name << '>' << std::endl;
		_signed = true;
		return ;
	}
	std::cout << '<' << b.getName() << "> cannot sign <" << _name << "> because <" << (reason ? "grade too low" : "form already signed") << '>' << std::endl;
}
