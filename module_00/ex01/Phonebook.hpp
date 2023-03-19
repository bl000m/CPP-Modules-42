/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:23 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:55:27 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <climits>
#include "Contact.hpp"

class Phonebook {

	//member attributes

	public:

		Phonebook();
		~Phonebook();

		void	addContact();
		void	displayContacts();
		void	searchContact();
		int		existingIndex(int index);

	private:
		Contact _contacts[8];
	// member functions

};

#endif
