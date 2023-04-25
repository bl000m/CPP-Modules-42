/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:20 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/06 10:30:58 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main() {

	Phonebook phonebook;
	std::string input;

	while (input.compare("EXIT")){
		phonebook.options();
		std::cout << "> " << std::flush;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
		{
			phonebook.displayContacts();
			phonebook.searchContact();
		}
	}
	return (0);
}
