/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:23 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/06 12:19:44 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <climits>
#include "Contact.hpp"

class Phonebook {

	public:

		Phonebook();
		~Phonebook();

		void	addContact();
		void	displayContacts();
		void	searchContact();
		int		existingIndex(int index);
		void	options();

	private:
		Contact _contacts[8];
		int		_count;

};

#endif
