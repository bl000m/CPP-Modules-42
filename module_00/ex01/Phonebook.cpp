/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:08:24 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/06 12:34:31 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook constructor called" << std::endl;
	this->_count = 0;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor called" << std::endl;
}

void	Phonebook::addContact(){

	static int	i;
	this->_contacts[i % 8].initContact();
	this->_contacts[i % 8].assigningIndex(i % 8);
	this->_count++;
	i++;

}

void	Phonebook::displayContacts(){

	std::cout << "CONTACTS LIST:" << std::endl;
	for (size_t i = 0; i < 8; i++)
		this->_contacts[i].display();

}

void	Phonebook::options(){

	std::cout << "Plese enter:" << std::endl;
	std::cout << "ADD to add contacts" << std::endl;
	std::cout << "SEARCH to search for contacts by INDEX" << std::endl;
	std::cout << "EXIT to... guess what ?" << std::endl;

}

void	Phonebook::searchContact(){
	int user_input = -1;

	std::cout << "Enter record Index" << std::endl;
	std::cin >> user_input;
	if (std::cin.good() && user_input >= 0 && user_input < 8 && user_input < this->_count)
	{
		this->_contacts[user_input].display();
	}
	else
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		std::cout << "Index not valid, try again" << std::endl;
	}
}
