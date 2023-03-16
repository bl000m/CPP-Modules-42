/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:14:15 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/16 18:41:48 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

Harl::Harl(){

	std::cout << "constructor called" << std::endl;
}

Harl::~Harl(){

	std::cout << "disstructor called" << std::endl;

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
	if (index < 4 && level != "EXIT")
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
