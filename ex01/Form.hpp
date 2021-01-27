/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 22:39:56 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 23:42:43 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

	Form(std::string const &, unsigned int const, unsigned int const);
	Form(const Form & src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _signed(src._signed) { }
	~Form(void) { }

	struct GradeTooHighException : public std::exception
	{
		const char * what () const throw () { return ("Grade too high"); }
	};
	struct GradeTooLowException : public std::exception
	{
		const char * what () const throw () { return ("Grade too low"); }
	};

	void beSigned(const Bureaucrat & b);
	inline bool isSigned(void) const { return (_signed); }
	inline std::string getName(void) const { return (_name); }
	inline unsigned int getSignGrade(void) const { return (_signGrade); }
	inline unsigned int getExecGrade(void) const { return (_execGrade); }
	
	
	private:

	std::string const _name;
	unsigned int const _signGrade;
	unsigned int const _execGrade;
	bool _signed;
};

std::ostream & operator<<(std::ostream &, const Form &);

#endif
