/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:42:37 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/03 12:50:53 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T & x, T & y){
	T third;
	third = x;
	x = y;
	y = third;
}

template <typename T>
T & min(T & x, T & y){
	return x < y ? x : y;
}

template <typename T>
T & max(T & x, T & y){
	return x > y ? x : y;
}

#endif
