/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:33:36 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/12 12:31:56 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "Constructor called for FragTrap named " << this->_name << std::endl;
}

FragTrap::FragTrap( const FragTrap &source): ClapTrap(source){
	std::cout << "Copy Constructor called for FragTrap named " << this->_name << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Destructor called for FragTrap named " << this->_name << std::endl;
}

void FragTrap::attack( const std::string &target ){
	if (_energyPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << "FragTrap " << _name << " attacks " << target << std::flush;
		std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "Not enough energy to attack" << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->_name  << " says: Hey guys give me five !" << std::endl;
}

