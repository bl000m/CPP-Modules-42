/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:20 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/13 17:59:54 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

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
}
