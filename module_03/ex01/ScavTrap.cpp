/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:05:47 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 14:18:23 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "Constructor called for ScavTrap named " << this->_name << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &source): ClapTrap(source){
	std::cout << "Copy Constructor called for ScavTrap named " << this->_name << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor called for ScavTrap named " << this->_name << std::endl;
}

void ScavTrap::attack( const std::string &target ){
	if (_energyPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << "ScavTrap " << _name << " attacks " << target << std::flush;
		std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "Not enough energy to attack" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " in Gate Keeper mode" << std::endl;
}
