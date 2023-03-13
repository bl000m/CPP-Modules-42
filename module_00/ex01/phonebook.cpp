/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:08:24 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/13 15:13:21 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook()
{

}

Phonebook::~Phonebook()
{
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

}
