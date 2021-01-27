/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Centralbureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:24:17 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/27 18:48:18 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include "Bureaucrat.hpp"
# include "Intern.hpp"
# include "OfficeBlock.hpp"
# include <ctime>
# include <cstdlib>

typedef struct timespec Timespec;

struct StringList
{
	std::string data;
	StringList * next;	
};

class CentralBureaucracy
{
	public:

	CentralBureaucracy(void);
	~CentralBureaucracy(void);

	void queuePop(void);
	void feed(Bureaucrat *, Bureaucrat *);
	void queueUp(std::string const &);
	std::string queueLast(void) const;
	void doBureaucracy(void);

	struct NoSitAvailableException : public std::exception
	{
		const char * what () const throw () { return ("No sit available"); }
	};
	struct NoTargetException : public std::exception
	{
		const char * what () const throw () { return ("No target in queue"); }
	};

	private:

	Intern * _interns[2];
	OfficeBlock * _sits[20];
	StringList * _queue;
};

#endif
