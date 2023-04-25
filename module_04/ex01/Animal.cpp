/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:34:02 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/13 14:40:14 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type): _type(type){
	std::cout << "Constructor called for animal with type " << this->_type << std:: endl;
}

Animal::Animal(): _type("not defined"){
	std::cout << "Constructor called for animal without any type" << std:: endl;
}

Animal::Animal(const Animal &source){
	*this = source;
	std::cout << "Copy constructor called for animal with type " << this->_type << std:: endl;
}

std::string Animal::getType() const{
	return this->_type;
}

Animal &Animal::operator=(const Animal &rightHandSide){
	if (this != &rightHandSide)
		this->_type = rightHandSide._type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Animal makeSound func called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Destructor called for animal with type " << this->_type << std:: endl;
}
