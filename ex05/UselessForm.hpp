/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UselessForm.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:30:51 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 16:47:58 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USELESSFORM_HPP
# define USELESSFORM_HPP

# include "Form.hpp"

class UselessForm : public Form
{
	public:

	UselessForm(std::string const & target) : Form("useless", 150, 150), _target(target) { }
	~UselessForm(void) { }

	virtual void execute(Bureaucrat const &) const;


	private:

	std::string _target;
};

#endif
