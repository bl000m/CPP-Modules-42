/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:17 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/15 10:30:45 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact()
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destructor called" << std::endl;
}

// std::string	Contact::_getInput(std::string str) const {

// }

 std::string	Contact::_printFirstTenChar(std::string str) const{
	if (str.length() > 10)
		return (str.substr(0, 9).append("."));
	return (str);
}

void	Contact::initContact(){

	std::cout << "Your first name?" << std::endl;
	std::getline(std::cin, this->_firstName);
	std::cout << "Your last name?" << std::endl;
	std::getline(std::cin, this->_lastName);
	std::cout << "Your nickname?" << std::endl;
	std::getline(std::cin, this->_nickname);
	std::cout << "Your phoneNumber?" << std::endl;
	std::getline(std::cin, this->_phoneNumber);
	std::cout << "Your darkest secret?" << std::endl;
	std::getline(std::cin, this->_darkestSecret);
}

int		Contact::getIndex() const {

	return (this->_index);

}

void	Contact::display(){

	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << std::setw(10) << this->_index << std::flush;
	std::cout << "|" << std::setw(10) << _printFirstTenChar(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << _printFirstTenChar(this->_lastName) << std::flush;
	std::cout << "|" << std::setw(10) << _printFirstTenChar(this->_nickname) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::assigningIndex(int i){
	this->_index = i;
}
