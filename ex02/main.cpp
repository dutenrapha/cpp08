/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:22:32 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/19 20:50:35 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int	main(void)
{
	MutantStack<int> test;

	test.push(5);
	test.push(17);

	std::cout << "Main do pdf:" << std::endl;
	std::cout << "test.top() : " << test.top() << std::endl;
	test.pop();
	std::cout << "test.pop() | test.size() : " << test.size() << std::endl << std::endl;

	test.push(3);
	test.push(5);
	test.push(737);
	test.push(0);

	MutantStack<int>::iterator it = test.begin();
	MutantStack<int>::iterator ite = test.end();

	++it;
	--it;
	std::cout << "while (test) : " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> 	s(test);
	std::cout << "stack s.size() : " << s.size() << " | MutantStack test.size() : "  << test.size() << std::endl;
	
	std::cout << std::endl;
	std::cout << "Main com testes extras:" << std::endl;
	std::string						_strings[5] = {"a", "ab", "abc", "abcd", "abcde"};

	MutantStack<std::string>		test2;
	std::list<std::string>			l;
	std::stack<std::string>			s2;
	int i;

	i = 0;
	while( i < 5)
	{
		test2.push(_strings[i]);
		s2.push(_strings[i]);
		l.push_back(_strings[i]);
		i++;
	}

	std::cout << "-------------------" << std::endl;
	std::cout << "Tamanho dos Containers" << std::endl;
	std::cout << "MutantStack : " << test2.size() << std::endl;
	std::cout << "Stack : " << s2.size() << std::endl;
	std::cout << "List : " << l.size() << std::endl;

	std::cout << "-------------------" << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "Valores da MutantStack (iter):" << std::endl;
	MutantStack<std::string>::iterator it2 = test2.begin();
	MutantStack<std::string>::iterator ite2 = test2.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << "-------------------" << std::endl;
	std::cout << "Valores da List :" << std::endl;
	std::list<std::string>::iterator it3 = l.begin();
	std::list<std::string>::iterator ite3 = l.end();
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::cout << "-------------------" << std::endl;
	std::cout << "Valores da MutantStack (top):" << std::endl;
	while (!test2.empty())
	{
		std::cout << test2.top() << std::endl;
		test2.pop();
	}
	std::cout << "-------------------" << std::endl;
	std::cout << "Valores da Stack :" << std::endl;
	while (!s2.empty())
	{
		std::cout << s2.top() << std::endl;
		s2.pop();
	}
	return(0);
}