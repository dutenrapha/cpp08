/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 05:22:35 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 20:59:43 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>

int main(void)
{
	int i;

	std::cout << "Test - 0" << std::endl;
	std::vector<int> vec;
	i = 0;
	while(i < 5)
	{
		vec.push_back(i);
		i++;
	}
	
	std::cout << "\nValores do vetor" << std::endl;
	std::vector<int>::iterator it = vec.begin();
	while (it != vec.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	
	std::cout << "\nTry to find 2" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 2);
		std::cout << "valor encontrado: " << *it << std::endl;
		std::cout << "index do valor encontrado: " << std::distance(vec.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nTry to find 29" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 29);
		std::cout << "valor encontrado: " << *it << std::endl;
		std::cout << "index do valor encontrado: " << std::distance(vec.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	std::cout << "\nTest - 1" << std::endl;
	std::deque<int> queue;
	i = 0;
	while(i < 5)
	{
		queue.push_front(i);
		i++;
	}
	std::cout << "\nValores da fila" << std::endl;
	std::deque<int>::iterator it2 = queue.begin();
	while (it2 != queue.end())
	{
		std::cout << *it2 << std::endl;
		it2++;
	}


	std::cout << "\nTry to find 2" << std::endl;
	try
	{
		std::deque<int>::iterator it2 = easyfind(queue, 2);
		std::cout << "valor encontrado: " << *it2 << std::endl;
		std::cout << "index do valor encontrado: " << std::distance(queue.begin(), it2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		std::cout << "\nTry to find 29" << std::endl;
	try
	{
		std::deque<int>::iterator it2 = easyfind(queue, 29);
		std::cout << "valor encontrado: " << *it2 << std::endl;
		std::cout << "index do valor encontrado: " << std::distance(queue.begin(), it2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::cout << "\nTest - 2" << std::endl;
	std::list<int> lista;
	i = 0;
	while(i < 5)
	{
		lista.push_front(i);
		i++;
	}
	std::cout << "\nValores da fila" << std::endl;
	std::list<int>::iterator it3 = lista.begin();
	while (it3 != lista.end())
	{
		std::cout << *it3 << std::endl;
		it3++;
	}


	std::cout << "\nTry to find 2" << std::endl;
	try
	{
		std::list<int>::iterator it3 = easyfind(lista, 2);
		std::cout << "valor encontrado: " << *it3 << std::endl;
		std::cout << "index do valor encontrado: " << std::distance(lista.begin(), it3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		std::cout << "\nTry to find 29" << std::endl;
	try
	{
		std::list<int>::iterator it3 = easyfind(lista, 29);
		std::cout << "valor encontrado: " << *it3 << std::endl;
		std::cout << "index do valor encontrado: " << std::distance(lista.begin(), it3) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
