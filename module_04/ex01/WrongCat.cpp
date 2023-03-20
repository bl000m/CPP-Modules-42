/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:54:41 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 17:34:54 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"){
	std::cout << "Constructor called for " << this->_type << std:: endl;
}

WrongCat::~WrongCat(){
	std::cout << "Destructor called for " << this->_type << std:: endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Miaooooo !" << std::endl;
}

