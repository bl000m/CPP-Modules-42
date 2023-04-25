/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:54:41 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/13 14:01:22 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"){
	std::cout << "Constructor called for " << this->_type << std:: endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &source): Animal("Cat") {
	*this = source;
}

Cat &Cat::operator=(const Cat &rightHandSide){
	std::cout << "Cat copy Assignment called for " << this->_type << std:: endl;
	if (this != &rightHandSide){
		this->_type = rightHandSide._type;
		*(this->_brain) = *(rightHandSide.getBrain());
	}
	return *this;
}

Animal &Cat::operator=(const Animal &rightHandSide){
	std::cout << "Animal copy Assignment called for " << this->_type << std:: endl;
	if (this != &rightHandSide){
		this->_type = rightHandSide.getType();
		*(this->_brain) = *(rightHandSide.getBrain());
	}
	return *this;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Destructor called for " << this->_type << std:: endl;
}

void Cat::makeSound() const {
	std::cout << "Miaooooo !" << std::endl;
}

Brain *Cat::getBrain() const {
	return this->_brain;
}
