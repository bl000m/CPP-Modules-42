/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:20 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:55:04 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main() {

	Phonebook phonebook;
	std::string input;

	while (input.compare("EXIT")){
		std::cout << "> " << std::flush;
		std::getline(std::cin, input);
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
