/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:06:06 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/25 20:39:39 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <ctime>
# include <cstdlib>
# include "Form.hpp"

typedef struct timespec t_timespec;

class RobotomyRequestForm : public Form
{
	public:

	RobotomyRequestForm(std::string const & target) : Form("robotomy request", 72, 45), _target(target) { }
	virtual ~RobotomyRequestForm(void) { }

	virtual void execute(Bureaucrat const &) const;
	inline void setTarget(std::string & newTarget) { _target = newTarget; }


	private:

	std::string _target;
};

#endif
