/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantPigTerminationForm.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:30:51 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 16:50:06 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTPIGTERMINATIONFORM_HPP
# define MUTANTPIGTERMINATIONFORM_HPP

# include "Form.hpp"

class MutantPigTerminationForm : public Form
{
	public:

	MutantPigTerminationForm(std::string const & target) : Form("mutant pig termination", 25, 75), _target(target) { }
	~MutantPigTerminationForm(void) { }

	virtual void execute(Bureaucrat const &) const;


	private:

	std::string _target;
};

#endif
