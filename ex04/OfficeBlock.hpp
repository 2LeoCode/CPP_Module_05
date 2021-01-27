/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:59:17 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/25 21:13:03 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include "Intern.hpp"
# include "Bureaucrat.hpp"

class OfficeBlock
{
	public:

	OfficeBlock(Intern * i, Bureaucrat * si, Bureaucrat * ex) : _intern(i), _signer(si), _executer(ex) { }
	~OfficeBlock(void) { }

	inline void setIntern(Intern * src) { _intern = src; }
	inline void setSigner(Bureaucrat * b) { _signer = b; }
	inline void setExecuter(Bureaucrat * b) { _executer = b; }
	void doBureaucracy(std::string const &, std::string const &) const;

	private:

	Intern * _intern;
	Bureaucrat * _signer;
	Bureaucrat * _executer;
};

#endif
