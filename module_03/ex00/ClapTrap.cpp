/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:55:48 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/11 16:06:00 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Constructor called for claptrap named " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source){
	*this = source;
	std::cout << "Copy constructor called for claptrap named " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName(){
	return (this->_name);
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rightHandSource){

	this->_name = rightHandSource._name;
	this->_hitPoints = rightHandSource._hitPoints;
	this->_energyPoints = rightHandSource._energyPoints;
	this->_attackDamage = rightHandSource._attackDamage;
	return (*this);
}

void ClapTrap::attack( const std::string &target ){
	if (_energyPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << std::flush;
		std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "Not enough energy to attack" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ){
	if (_energyPoints > 0)
	{
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " be repaired" << std::flush;
		std::cout << " and now has " << _hitPoints << " hit points !" << std::endl;

	}
	else
		std::cout << "Not enough energy to be repaired" << std::endl;

}

void ClapTrap::takeDamage( unsigned int amount ){
	if (_hitPoints >= amount)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " has been hit" << std::flush;
		std::cout << " and now has " << _hitPoints << " hit points !" << std::endl;

	}
	else
		std::cout << _name << " has bin hit and now has not enough hit point to keep living" << std::endl;

}
