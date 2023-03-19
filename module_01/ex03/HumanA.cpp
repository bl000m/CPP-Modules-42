/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:41:14 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/19 09:49:35 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){
  std::cout << "A new HumanA with weapon of type " << this->_weapon.getType() << " is born" << std::endl;
}

HumanA::~HumanA(){
  std::cout << "A HumanA is dead" << std::endl;
}

void  HumanA::attack(){
  std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
