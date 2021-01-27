/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PromoteForm.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:44:19 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 16:49:59 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROMOTEFORM_HPP
# define PROMOTEFORM_HPP

# include "Form.hpp"

class PromoteForm : public Form
{
	public:

	PromoteForm(std::string const & target) : Form("promote", 120, 100), _target(target) { }
	~PromoteForm(void) { }

	virtual void execute(const Bureaucrat &) const;

	private:

	std::string _target;
};

#endif
