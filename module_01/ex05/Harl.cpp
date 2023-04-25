/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:14:15 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/07 14:11:37 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){

	std::cout << "constructor called" << std::endl;
}

Harl::~Harl(){

	std::cout << "distructor called" << std::endl;

}

void Harl::complain( std::string level ){

	fun functions [] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels [] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int index = 0;

	while (index < 4 && levels[index].compare(level))
		index++;
	if (index < 4)
		(this->*functions[index])();
	else
	{
		if (level != "EXIT")
			std::cout << "You would better write the level's name exactly as it is..." << std::endl;
		else
			std::cout << "Bye bye !" << std::endl;

	}


}

void	Harl::debug(){

	std::cout << "I love having extra bacon ... I really do !" << std::endl;

}

void	Harl::info(){

	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;

}

void	Harl::warning(){

	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;

}

void	Harl::error(){

	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;

}
