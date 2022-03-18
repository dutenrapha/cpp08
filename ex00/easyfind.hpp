/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 19:52:52 by rdutenke          #+#    #+#             */
/*   Updated: 2022/03/18 20:20:24 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class ValueNotFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("valor não encontrado");
		}
};

template<typename T>
typename T::iterator easyfind(T &cnt, int n)
{
	typename T::iterator target = std::find(cnt.begin(), cnt.end(), n);
	if (target == cnt.end())
	{
		throw ValueNotFound();
	}
	return (target);
}

#endif