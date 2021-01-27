/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:01:31 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/24 11:16:57 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const & b)
{
	Form::execute(b);
	std::cout << '<' << _target << "> has been pardonned by Zafod Beeblebrox" << std::endl;
}
