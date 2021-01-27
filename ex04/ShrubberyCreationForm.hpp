/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:19:12 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/25 20:55:36 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

# define ASCII_TREE "     ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\\\//  /douUP\n        \\\\\\////\n         |||/\\\n         |||\\/\n         |||||   .....//||||\\...."

class ShrubberyCreationForm : public Form
{
	public:

	ShrubberyCreationForm(std::string const & target) : Form("shrubbery creation", 145, 137), _target(target) { }
	virtual ~ShrubberyCreationForm(void) { }

	virtual void execute(Bureaucrat const &) const;


	private:

	std::string _target;
};

#endif
