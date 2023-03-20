/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:05:47 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 13:28:15 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name){
	std::cout << "Constructor called for ScavTrap named " << this->_name << std::endl;
}

// ScavTrap::ScavTrap(const ScavTrap &source){
// 	*this = source;
// 	std::cout << "Copy constructor called for ScavTrap named " << this->_name << std::endl;
// }

ScavTrap::~ScavTrap(){
	std::cout << "Destructor called for ScavTrap named " << this->_name << std::endl;
}
