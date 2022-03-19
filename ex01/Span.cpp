/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:15:58 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/19 19:10:05 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0) 
{
	return ;
}

Span::Span(unsigned int N) : _N(N), _array(new std::vector<int>[N])
{
	return ;
}

Span::~Span(void)
{
	delete[] _array;
	return ;
}

Span::Span(Span const &src) : _N(src.getN()), _array(new std::vector<int>[this->_N])
{
	*this = src;
}

Span &Span::operator=(Span const &rhs)
{
	for (unsigned int i = 0; i < this->getN(); i++)
		this->_array[i] = rhs._array[i];
	return (*this);
}

unsigned int	Span::getN(void) const
{
	return (this->_N);
}

void	Span::addNumber(int n)
{
	try
	{
		if (this->_array->size() == this->_N)
		{
			throw IsFilled();
		}
			
		this->_array->push_back(n);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int		Span::shortestSpan(void)
{
	if ((this->_N == 0) || (this->_array->size() <= 1))
	{
		throw EmptySpan();
	}
	std::vector<int>::iterator	it;
	std::vector<int>			tmp;
	std::vector<int>			sortVec = *this->_array;
	std::sort(sortVec.begin(), sortVec.end());
	for (it = sortVec.begin() + 1; it != sortVec.end(); it++)
		tmp.push_back(*it - *(it - 1));
	return *std::min_element(tmp.begin(), tmp.end());
}

int		Span::longestSpan(void)
{
	if ((this->_N == 0) || (this->_array->size() <= 1))
	{
		throw EmptySpan();
	}
	int biggest = *std::max_element(this->_array->begin(), this->_array->end());
	int smallest = *std::min_element(this->_array->begin(), this->_array->end());
	return (std::abs(biggest - smallest));

	
	return (*max_element(this->_array->begin(), this->_array->end()));
}
