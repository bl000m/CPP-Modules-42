/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:14:15 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:44:36 by mathiapagan      ###   ########.fr       */
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

	for (int i = 0; i < 4; i ++){
		if (!levels[i].compare(level)){
			index = i;
			break ;
		}
	}
	if (level != "EXIT")
		(this->*functions[index])();

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
