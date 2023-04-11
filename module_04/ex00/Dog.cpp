/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:54:41 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 16:48:14 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"){
	std::cout << "Constructor called for " << this->_type << std:: endl;
}

Dog::~Dog(){
	std::cout << "Destructor called for " << this->_type << std:: endl;
}

void Dog::makeSound() const {
	std::cout << "Ouaf ouaf !" << std::endl;
}
