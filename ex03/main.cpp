/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:53:36 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/25 01:23:14 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "---ERROR TEST---" << std::endl;
	try { Bureaucrat john("John", 150); std::cout << john << std::endl; }
	catch (std::exception & e) { std::cout << "John " << e.what() << std::endl; }
	try { Bureaucrat willy("Willy", 0); std::cout << willy << std::endl; }
	catch (std::exception & e) { std::cout << "Willy " << e.what() << std::endl; }
	try { Bureaucrat bob("Bob", 151); std::cout << bob << std::endl; }
	catch (std::exception & e) { std::cout << "Bob " << e.what() << std::endl; }
	try { Form form1("form_1", 100, 20); std::cout << form1 << std::endl; }
	catch (std::exception & e) { std::cout << "form_1 " << e.what() << std::endl; }
	try { Form form2("form_2", 158, 20); std::cout << form2 << std::endl; }
	catch (std::exception & e) { std::cout << "form_2 " << e.what() << std::endl; }
	try { Form form3("form_3", 8, 0); std::cout << form3 << std::endl; }
	catch (std::exception & e) { std::cout << "form_3 " << e.what() << std::endl; }
	std::cout << "----------------" << std::endl << std::endl;

	Bureaucrat bob("Bob", 150);
	std::cout << bob << std::endl;
	Bureaucrat john("John", 120);
	std::cout << john << std::endl;
	Bureaucrat paul("Paul", 90);
	std::cout << paul << std::endl;
	Bureaucrat jack("Jack", 10);
	std::cout << jack << std::endl;

	Form form1("form_1", 100, 10);
	std::cout << form1 << std::endl;
	Form form2("form_2", 10, 100);
	std::cout << form2 << std::endl;

	bob.signForm(form1);
	john.signForm(form1);
	paul.signForm(form1);
	bob.signForm(form2);
	john.signForm(form2);
	paul.signForm(form2);

	Form * pre = new PresidentialPardonForm("Criminal");
	Form * rob = new RobotomyRequestForm("Bob");
	Form * shrub = new ShrubberyCreationForm("tree");

	std::cout <<"OK\n";
	bob.signForm(*pre);
	john.signForm(*pre);
	paul.signForm(*pre);
	jack.signForm(*pre);
	bob.executeForm(*pre);
	john.executeForm(*pre);
	paul.executeForm(*pre);
	jack.executeForm(*pre);
	bob.signForm(*rob);
	john.signForm(*rob);
	paul.signForm(*rob);
	jack.signForm(*rob);
	bob.executeForm(*rob);
	john.executeForm(*rob);
	paul.executeForm(*rob);
	jack.executeForm(*rob);

	bob.signForm(*shrub);
	john.signForm(*shrub);
	paul.signForm(*shrub);
	jack.signForm(*shrub);
	bob.executeForm(*shrub);
	john.executeForm(*shrub);
	paul.executeForm(*shrub);
	jack.executeForm(*shrub);

	std::cout << "---INTERN TEST---" << std::endl;
	Intern newIntern;

	Form * tmp;
	try
	{
		tmp = newIntern.makeForm("shrubbery creation", "tree2");
		std::cout << *tmp << std::endl;
		bob.signForm(*tmp);
		john.signForm(*tmp);
		paul.signForm(*tmp);
		jack.signForm(*tmp);
		bob.executeForm(*tmp);
		john.executeForm(*tmp);
		paul.executeForm(*tmp);
		jack.executeForm(*tmp);
	}
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	delete tmp;
	try
	{
		tmp = newIntern.makeForm("robotomy request", "Bob");
		std::cout << *tmp << std::endl;
		bob.signForm(*tmp);
		john.signForm(*tmp);
		paul.signForm(*tmp);
		jack.signForm(*tmp);
		bob.executeForm(*tmp);
		john.executeForm(*tmp);
		paul.executeForm(*tmp);
		jack.executeForm(*tmp);
	}
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	delete tmp;
	try
	{
		tmp = newIntern.makeForm("presidential pardon", "Bob");
		std::cout << *tmp << std::endl;
		bob.signForm(*tmp);
		john.signForm(*tmp);
		paul.signForm(*tmp);
		jack.signForm(*tmp);
		bob.executeForm(*tmp);
		john.executeForm(*tmp);
		paul.executeForm(*tmp);
		jack.executeForm(*tmp);
	}
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	delete tmp;
	try { tmp = newIntern.makeForm("foo", "bar"); }
	catch (std::exception & e) { std::cout << e.what() << std::endl; }
	tmp = newIntern.makeForm("foo", 0, 0);
	tmp = newIntern.makeForm("foo", 5, 5);
	std::cout << *tmp << std::endl;
	bob.signForm(*tmp);
	john.signForm(*tmp);
	paul.signForm(*tmp);
	jack.signForm(*tmp);
	bob.executeForm(*tmp);
	john.executeForm(*tmp);
	paul.executeForm(*tmp);
	jack.executeForm(*tmp);
	delete tmp;
	std::cout << "-----------------" << std::endl;
	delete pre;
	delete rob;
	delete shrub;
	return (0);
}
