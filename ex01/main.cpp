/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 23:18:21 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/19 18:34:10 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <unistd.h>

int main(void)
{
	std::cout << "Test - 0" << std::endl;
	Span test = Span(5);
	test.addNumber(-2);
	test.addNumber(-1);
	test.addNumber(0);
	test.addNumber(1);
	test.addNumber(2);
	test.addNumber(3);
	test.addNumber(4);
	test.addNumber(5);
	try
	{
		std::cout << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << test.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Test - 1" << std::endl;
	Span test2 = Span(50000);
	for (int i = 0; i < 50000; i++)
	{
		usleep(10);
		std::srand((unsigned int)time(NULL));
		test2.addNumber(rand());
	}
	test2.addNumber(42);
	try
	{
		std::cout << test2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << test2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Test - 2" << std::endl;
	Span test3 = Span(0);
	try
	{
		std::cout << test3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << test3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Test - 3" << std::endl;
	Span test4 = Span(1);
	try
	{
		std::cout << test4.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << test4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return(0);
}