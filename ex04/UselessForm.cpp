/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UselessForm.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:30:54 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 17:12:33 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UselessForm.hpp"

void UselessForm::execute(Bureaucrat const & b) const
{
	Form::execute(b);
	std::cout << "Nothing happened to <" << _target << '>' << std::endl;
}
