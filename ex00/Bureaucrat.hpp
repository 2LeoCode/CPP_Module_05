/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:30:12 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 22:25:58 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <string>
# include <iostream>

class Bureaucrat
{
	public:

	Bureaucrat(std::string const & name, unsigned int grade);
	Bureaucrat(const Bureaucrat & src) : _name(src._name), _grade(src._grade) { }
	~Bureaucrat(void) { }

	inline void operator=(const Bureaucrat & src) { _grade = src._grade; }

	
	struct GradeTooHighException : public std::exception
	{
		const char * what () const throw () { return ("Grade too high"); }
	};
	struct GradeTooLowException : public std::exception
	{
		const char * what () const throw () { return ("Grade too low"); }
	};

	inline std::string getName(void) const { return (_name); }
	inline unsigned int getGrade(void) const { return (_grade); }


	private:

	std::string const _name;
	unsigned int _grade;
};

std::ostream & operator<<(std::ostream &, Bureaucrat &);

#endif
