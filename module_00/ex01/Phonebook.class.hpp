/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:23 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/14 12:21:26 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <climits>
#include "Contact.class.hpp"

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
