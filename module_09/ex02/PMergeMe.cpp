/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:53:45 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/09 11:06:25 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

PMergeMe::PMergeMe(char **values, int numValues) : _sorted(false){
	for (int i = 1; i < numValues; i++){
		_vectorCont.push_back(atoi(values[i]));
	}
	for (int i = 1; i < numValues; i++){
		_dequeCont.push_back(atoi(values[i]));
	}
}

PMergeMe::~PMergeMe(){}

PMergeMe::PMergeMe(const PMergeMe &src){
	*this = src;
}

PMergeMe & PMergeMe::operator=(const PMergeMe &rhs){
	if (&rhs != this)
	*this = rhs;
	return *this;
}

// std::ostream& operator<<(std::ostream& o, PMergeMe const& i)
// {
//     try
//     {
// 		if (_sorted == false){
// 			o << "Before: ";
// 			for (size_t i = 0; i < vectorCont.size(); i++){
// 				<< ...[i];
// 			}
// 			<< std::endl;
// 		}
// 		else{
//             o << "After: ";
// 			for (size_t i = 0; i < vectorCont.size(); i++){
// 				<< ...[i];
// 			}
// 			<< std::endl;
// 		}

//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     return o;
// }
