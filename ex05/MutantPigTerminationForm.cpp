/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantPigTerminationForm.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:30:54 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 16:50:13 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantPigTerminationForm.hpp"

void MutantPigTerminationForm::execute(Bureaucrat const & b) const
{
	Form::execute(b);
	std::cout << "That'll do, " << _target << ". That'll do..." << std::endl;
}
