/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:08:24 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:56:18 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook constructor called" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor called" << std::endl;
}

void	Phonebook::addContact(){

	static int	i;
	this->_contacts[i % 8].initContact();
	this->_contacts[i % 8].assigningIndex(i % 8);
	i++;

}

void	Phonebook::displayContacts(){

	std::cout << ".~.~ contacts: ~.~." << std::endl;
	for (size_t i = 0; i < 8; i++)
		this->_contacts[i].display();

}

void	Phonebook::searchContact(){
	int user_input = -1;

	std::cout << "Enter record Index" << std::endl;
	std::cin >> user_input;
	if (user_input >= 0)
	{
		if (user_input <= this->_contacts[user_input].getIndex())
		this->_contacts[user_input].display();
		else
		{
			std::cout << "Index not valid, try again" << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
	}
}
