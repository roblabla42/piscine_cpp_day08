/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla <robinlambertz+dev@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 10:58:43 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/26 12:34:53 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::iterator easyfind(T &container, int i)
{
	typename T::iterator it = container.begin();
	typename T::iterator end = container.end();
	while (it != end && *it != i)
		++it;
	return it;
}
