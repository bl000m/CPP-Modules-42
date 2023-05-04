/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:35:18 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/04 14:00:43 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <list>

template <typename T>
typename T::const_iterator easyfind(const T & container, int toFind){
	return std::find(container.begin(), container.end(), toFind);
}

#endif
