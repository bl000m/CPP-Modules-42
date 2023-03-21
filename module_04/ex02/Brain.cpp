/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:04:58 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/21 10:22:04 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Constructor called for brain" << std::endl;
}

Brain::Brain(const Brain &source){
		*this = source;
}

Brain &Brain::operator=(const Brain &source){
	if (this != &source){
		for (int i = 0; i < 100; i++){
			this->_ideas[i] = source._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Destructor called for brain" << std::endl;
}
