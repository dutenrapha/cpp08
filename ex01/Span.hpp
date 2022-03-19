/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:15:44 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/19 19:46:57 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
# include <set>
# include <cmath>
# include <algorithm>
# include <iostream>
# include <iterator>

class Span
{
	class IsFilled : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Span is completly Filled");
			}
	};

	class EmptySpan : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("There are not enough numbers to implement this calculation");
			}
	};

	public:
		Span(void);
		Span(Span const &src);
		~Span(void);
		Span			&operator=(Span const &rhs);
		
		Span(unsigned int N);
		void			addNumber(int n);
		void			addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
		int				shortestSpan(void);
		int				longestSpan(void);
		unsigned int	getN(void) const;

	private:
		unsigned int const	_N;
		std::vector<int>	*_array;
};

#endif