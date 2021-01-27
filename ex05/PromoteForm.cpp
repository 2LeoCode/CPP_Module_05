/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PromoteForm.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:35:48 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 16:51:38 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PromoteForm.hpp"

void PromoteForm::execute(Bureaucrat const & b) const
{
	Form::execute(b);
	std::cout << '<' << _target << "> has been promoted to Bureaucrat++" << std::endl;
}
