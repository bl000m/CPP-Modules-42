/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:41:14 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/19 09:51:31 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
  this->_weapon = NULL;
  std::cout << "A new HumanB is born" << std::endl;
}

HumanB::~HumanB(){
  std::cout << "A HumanB is dead" << std::endl;
}

void  HumanB::setWeapon(Weapon& weapon){
  this->_weapon = &weapon;
}

void  HumanB::attack(){
  if (this->_weapon)
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
  else
    std::cout << this->_name << "can't attack since he has no weapon" << std::endl;
}
