/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:59:02 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 16:16:40 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

void OfficeBlock::doBureaucracy(std::string const & name, std::string const & target) const
{
	Form * newForm = nullptr;

	try { newForm = _intern->makeForm(name, target); }
	catch (std::exception & e) { std::cout << "Failed to create <" << name << "> because <" << e.what() << '>' << std::endl; return ; }
	_signer->signForm(*newForm);
	_executer->executeForm(*newForm);
	delete newForm;
}

