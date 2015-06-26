/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla <robinlambertz+dev@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 11:10:27 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/26 12:33:18 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <iostream>
#include "easyfind.hpp"

int		main()
{
	std::list<int> st;
	st.push_front(12);
	st.push_front(17);
	st.push_front(32);
	std::list<int>::iterator it;

	if (( it = easyfind(st, 17)) != st.end())
		std::cout << "Found: " << *it << std::endl;
	else
		std::cout << "Not found (error)" << std::endl;
	if ((it = easyfind(st, 18)) != st.end())
		std::cout << "Found (error): " << *it << std::endl;
	else
		std::cout << "Not found" << std::endl;
}
