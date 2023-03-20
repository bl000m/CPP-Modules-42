/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:55:48 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 11:01:24 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Constructor called" << std::endl
}

ClapTrap::ClapTrap(): name(_name){
	std::cout << "Constructor called for claptrap named " << this->_name << std::endl
}

ClapTrap::ClapTrap(const ClapTrap &source){
	*this = source;
	std::cout << "Copy constructor called for claptrap named " << this->_name << std::endl
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl
}
