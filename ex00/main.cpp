/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuardi <lsuardi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:53:36 by lsuardi           #+#    #+#             */
/*   Updated: 2021/01/23 22:33:21 by lsuardi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try { Bureaucrat john("John", 150); std::cout << john << std::endl; }
	catch (std::exception & e) { std::cout << "John " << e.what() << std::endl; }
	try { Bureaucrat willy("Willy", 0); std::cout << willy << std::endl; }
	catch (std::exception & e) { std::cout << "Willy " << e.what() << std::endl; }
	try { Bureaucrat bob("Bob", 151); std::cout << bob << std::endl; }
	catch (std::exception & e) { std::cout << "Bob " << e.what() << std::endl; }
	return (0);
}
