/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:53:36 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/24 00:05:16 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	Bureaucrat john("John", 20);
	std::cout << john << std::endl;
	Bureaucrat paul("Paul", 100);
	std::cout << paul << std::endl;

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
	return (0);
}
