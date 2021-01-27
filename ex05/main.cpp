/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:53:36 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/27 19:02:47 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"
#include <ctime>
#include <cstdlib>

int randomInt(int a, int b)
{
	Timespec currentTime;

	clock_gettime(CLOCK_REALTIME, &currentTime);
	std::srand(currentTime.tv_nsec);
	currentTime.tv_sec = 0;
	currentTime.tv_nsec = 100000;
	nanosleep(&currentTime, NULL);
	return (a + rand() % (b - a + 1));
}

int main(void)
{
	CentralBureaucracy central;
	Bureaucrat * b[42];

	for (int i = 0; i < 42; i++)
	{
		b[i] = new Bureaucrat("Bureaucrat", randomInt(1, 150));
		std::cout << *b[i] << std::endl;
	}
	for (int i = 0; i < 42; i += 2)
		try { central.feed(b[i], b[i + 1]); }
		catch (const std::exception & e) { std::cout << "Failed to feed bureaucrat because <" << e.what() << '>' << std::endl; }
	for (int i = 0; i < 35; i++)
		central.queueUp("Bob");
	try
	{
		central.doBureaucracy();
		central.doBureaucracy();
	}
	catch (CentralBureaucracy::NoTargetException const & e) { std::cout << "My custom error message <" << e.what() << '>' << std::endl; }
	catch (std::exception const & e) { std::cout << "Failed to do bureaucracy because <" << e.what() << '>' << std::endl; }
	for (int i = 0; i < 42; i++)
		delete b[i];
	return (0);
}
