/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:54:41 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/13 13:49:31 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	std::cout << "Constructor called for " << this->_type << std:: endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &source): Animal("Dog"){
	*this = source;
}

Dog &Dog::operator=(const Dog &rightHandSide){
	std::cout << "Dog copy Assignment called for " << this->_type << std:: endl;
	if (this != &rightHandSide){
		this->_type = rightHandSide._type;
		*(this->_brain) = *(rightHandSide.getBrain());
	}
	return *this;
}

Animal &Dog::operator=(const Animal &rightHandSide){
	std::cout << "Animal copy Assignment called for " << this->_type << std:: endl;
	if (this != &rightHandSide){
		this->_type = rightHandSide.getType();
		*(this->_brain) = *(rightHandSide.getBrain());
	}
	return *this;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Destructor called for " << this->_type << std:: endl;
}

void Dog::makeSound() const {
	std::cout << "Ouaf ouaf !" << std::endl;
}

Brain *Dog::getBrain() const {
	return this->_brain;
}

