/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla <robinlambertz+dev@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 12:37:36 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/26 20:53:38 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <iostream>

Span::Span(size_t n) : _nint(), _size_nint(n) {
}

Span::~Span() {
}

void		Span::addNumber(int number) throw(std::out_of_range){
	if (_nint.size() < _size_nint)
		this->_nint.push_back(number);
	else
		throw std::out_of_range("out of range");
}

int	Span::shortestSpan()
{
	unsigned int		i;
	int					shortest;
	int					tmp;

	std::sort(this->_nint.begin(), this->_nint.end());
	i = 0;
	if (this->_nint.size() <= 1 ) {
		std::cout << "error 'not enough element'" << std::endl;
		return (tmp = -1);
	}
	shortest = this->_nint.back() - this->_nint.front();
	while (i + 1 < this->_nint.size())
	{
		tmp = this->_nint[i + 1] - this->_nint[i];
		if (tmp < shortest)
			shortest = tmp;
		if (shortest == 0)
			break ;
		i++;
	}
	return (shortest);
}

int	Span::longestSpan()
{
	unsigned int    i;
	int                shortest;
	int                tmp;

	std::sort(this->_nint.begin(), this->_nint.end());
	i = 0;
	if (this->_nint.size() <= 1 ) {
		std::cout << "error 'not enough element'" << std::endl;
		return (tmp = -1);
	}
	shortest = this->_nint.back() - this->_nint.front();
	return (shortest);
}
