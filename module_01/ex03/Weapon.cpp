/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:21:35 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/16 10:40:37 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon(){
	std::cout << "a new weapon instance has been created" << std::endl;
}

Weapon::~Weapon(){
	std::cout << "a weapon instance has been deleted" << std::endl;
}

std::string	Weapon::getType() const{
	return (this->_type);
}

void	
