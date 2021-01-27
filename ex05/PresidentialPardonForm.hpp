/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 10:58:09 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/25 20:39:43 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:

	PresidentialPardonForm(std::string const & target) : Form("presidential pardon", 25, 5), _target(target) { }
	virtual ~PresidentialPardonForm(void) { }

	virtual void execute(Bureaucrat const &) const;
	inline void setTarget(std::string const & newTarget) { _target = newTarget; }


	private:

	std::string _target;
};

#endif
