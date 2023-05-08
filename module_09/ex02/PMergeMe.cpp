/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:53:45 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/08 16:59:16 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

PMergeMe::PMergeMe(){}

PMergeMe::~PMergeMe(){}

PMergeMe::PMergeMe(const PMergeMe &src){
	*this = src;
}

PMergeMe & PMergeMe::operator=(const PMergeMe &rhs){
	if (&rhs != this)
	*this = rhs;
	return *this;
}

void PMergeMe::making(std::string **argv){
	//
}
