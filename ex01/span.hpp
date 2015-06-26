/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla <robinlambertz+dev@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 12:35:20 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/26 20:44:35 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

#include <stdexcept>
#include <vector>
#include <cstddef>

class Span {

	private :
		std::vector<int>		_nint;
		size_t					_size_nint;
		Span(Span const &rhs);
		Span & operator=(Span const &rhs);
		Span(void);

	public :
		Span(size_t n);
		virtual ~Span();
		void		addNumber(int number) throw(std::out_of_range);
		int			shortestSpan();
		int			longestSpan();
};

#endif
