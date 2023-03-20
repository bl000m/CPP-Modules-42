/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:33:36 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 14:45:27 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ): ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "Constructor called for FragTrap named " << this->_name << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Destructor called for FragTrap named " << this->_name << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "Hey guys give me five !" << std::endl;
}

