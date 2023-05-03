/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:08:03 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/03 15:32:28 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <cstdlib>

template <typename T>
void iter(T *array, size_t size, void func(const T &arrayItem)){
	for (size_t i = 0; i < size; i++){
		func(array[i]);
	}
}

#endif
