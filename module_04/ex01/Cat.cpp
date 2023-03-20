/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:54:41 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 18:14:57 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	std::cout << "Constructor called for " << this->_type << std:: endl;

}


Cat::~Cat(){
	std::cout << "Destructor called for " << this->_type << std:: endl;
}

void Cat::makeSound() const {
	std::cout << "Miaooooo !" << std::endl;
}

