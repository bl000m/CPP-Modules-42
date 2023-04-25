/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:21:35 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/07 12:31:09 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
	std::cout << "a new weapon" << " of type " << this->_type << " has been created" << std::endl;
}

Weapon::~Weapon(){
	std::cout << "a weapon instance has been deleted" << std::endl;
}

const std::string&	Weapon::getType() const{
	return (this->_type);
}

void  Weapon::setType(std::string type){
  this->_type = type;
}
