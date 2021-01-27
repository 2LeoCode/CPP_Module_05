/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SomeIntern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:56:23 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/26 17:10:37 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SomeIntern.hpp"

Form * newUselessForm(std::string const & target)
{
	return (new UselessForm(target));
}

Form * newMutantPigTerminationForm(std::string const & target)
{
	return (new MutantPigTerminationForm(target));
}

Form * newPromoteForm(std::string const & target)
{
	return (new PromoteForm(target));
}

SomeIntern::SomeIntern(void) : Intern()
{
	setKnownForm(0, &newUselessForm);
	setKnownForm(1, &newMutantPigTerminationForm);
	setKnownForm(2, &newPromoteForm);
	setKnownName(0, "useless");
	setKnownName(1, "mutant pig termination");
	setKnownName(2, "promote");
}
