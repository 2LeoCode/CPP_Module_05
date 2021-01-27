/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:36:10 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/27 18:53:51 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

static int randomInt(int a, int b)
{
	Timespec currentTime;

	clock_gettime(CLOCK_REALTIME, &currentTime);
	std::srand(currentTime.tv_nsec);
	return (a + rand() % (b - a + 1));
}

CentralBureaucracy::CentralBureaucracy(void) : _queue(nullptr), _sits()
{
	_interns[0] = new Intern;
	_interns[1] = new SomeIntern;
}

CentralBureaucracy::~CentralBureaucracy(void)
{
	delete _interns[0];
	delete _interns[1];

	StringList * tmp;
	while (_queue)
	{
		tmp = _queue->next;
		delete _queue;
		_queue = tmp;
	}
	for (int i = 0; (i < 20) && _sits[i]; i++)
		delete _sits[i];
}

void CentralBureaucracy::feed(Bureaucrat * si, Bureaucrat * ex)
{
	static bool internIndex = false;
	int i = 0;

	while ((i < 20) && _sits[i])
		i++;
	if (i == 20)
		throw (NoSitAvailableException());
	_sits[i] = new OfficeBlock(_interns[internIndex], si, ex);

	if (!internIndex)
		internIndex = true;
	else internIndex = false;
}

void CentralBureaucracy::queueUp(std::string const & target)
{
	StringList * tmp = new StringList;

	tmp->data = target;
	tmp->next = _queue;
	_queue = tmp;
}

std::string CentralBureaucracy::queueLast(void) const
{
	StringList * tmp = _queue;

	if (!tmp)
		throw (NoTargetException());
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->data);
}

void CentralBureaucracy::queuePop(void)
{
	StringList * tmp = _queue;
	StringList * prev = nullptr;

	if (!tmp)
		throw (NoTargetException());
	if (!tmp->next)
	{
		delete _queue;
		_queue = nullptr;
		return ;
	}
	while (tmp->next)
		prev = tmp, tmp = tmp->next;
	delete tmp;
	prev->next = nullptr;
}

void CentralBureaucracy::doBureaucracy(void)
{
	int rd;
	std::string target;

	for (int i = 0; (i < 20) && _sits[i]; i++)
	{
		StringList * tmp = _queue;
		target = queueLast();
		queuePop();
		rd = randomInt(0, 2);
		_sits[i]->doBureaucracy(_sits[i]->getIntern()->getKnownName(rd), target);
	}
}
