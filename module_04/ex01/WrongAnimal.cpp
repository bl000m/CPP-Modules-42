/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:34:02 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 17:27:39 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type): _type(type){
	std::cout << "Constructor called for WrongAnimal with type " << this->_type << std:: endl;
}

WrongAnimal::WrongAnimal(): _type("not defined"){
	std::cout << "Constructor called for WrongAnimal without any type" << std:: endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &source){
	*this = source;
	std::cout << "Copy constructor called for WrongAnimal with type " << this->_type << std:: endl;
}

std::string WrongAnimal::getType() const{
	return this->_type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rightHandSide){
	this->_type = rightHandSide._type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makeSound func called" << std::endl;
}


WrongAnimal::~WrongAnimal(){
	std::cout << "Destructor called for WrongAnimal with type " << this->_type << std:: endl;
}
