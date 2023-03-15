/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:42:52 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/15 13:58:02 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie(){
	std::cout << "a Zombie is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is died" << std::endl;
}

void	Zombie::announce() const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}

void	Zombie::setName(std::string name){

	this->_name = name;

}
