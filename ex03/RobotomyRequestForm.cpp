/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:06:53 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/24 11:33:07 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(Bureaucrat const & b)
{
	Form::execute(b);
	std::cout << "* drilling noises *" << std::endl;

	t_timespec currentTime;
	bool success;

	clock_gettime(CLOCK_REALTIME, &currentTime);
	std::srand(currentTime.tv_nsec);

	success = std::rand() % 2;
	if (success)
		std::cout << '<' << _target << "> has been robotomized" << std::endl;
	else
		std::cout << "Failed to robotomize <" << _target << '>' << std::endl;
}
