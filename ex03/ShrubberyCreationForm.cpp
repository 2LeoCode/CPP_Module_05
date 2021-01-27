/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:19:09 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/25 01:27:27 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const & b)
{
	Form::execute(b);

	std::ofstream out(_target + "_shrubbery", std::ios::out | std::ios::app);
	out << ASCII_TREE << std::endl;
	out.close();
}
