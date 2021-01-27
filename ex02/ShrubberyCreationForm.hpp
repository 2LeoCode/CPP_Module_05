/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:19:12 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/25 01:24:22 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:

	ShrubberyCreationForm(std::string const & target) : Form("shrubbery_creation_form", 145, 137), _target(target) { }
	virtual ~ShrubberyCreationForm(void) {  }

	virtual void execute(Bureaucrat const &);


	private:

	std::string const & _target;
};

#endif
