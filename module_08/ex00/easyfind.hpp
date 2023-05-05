/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:35:18 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/05 13:57:59 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(const T & container, int toFind){
	typename T::const_iterator it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end()) {
		throw std::runtime_error("Oh no... the item is not in the list.");
	}
	return it;
}

#endif
