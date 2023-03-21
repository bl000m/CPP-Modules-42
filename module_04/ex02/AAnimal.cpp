/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:34:02 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/21 11:23:19 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type): _type(type){
	std::cout << "Constructor called for Aanimal with type " << this->_type << std:: endl;
}

AAnimal::AAnimal(): _type("not defined"){
	std::cout << "Constructor called for Aanimal without any type" << std:: endl;
}

AAnimal::AAnimal(const AAnimal &source){
	*this = source;
	std::cout << "Copy constructor called for Aanimal with type " << this->_type << std:: endl;
}

std::string AAnimal::getType() const{
	return this->_type;
}

AAnimal &AAnimal::operator=(const AAnimal &rightHandSide){
	this->_type = rightHandSide._type;
	return *this;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal makeSound func called" << std::endl;
}


AAnimal::~AAnimal(){
	std::cout << "Destructor called for Aanimal with type " << this->_type << std:: endl;
}
