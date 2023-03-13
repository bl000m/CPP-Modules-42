/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:23 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/13 13:15:22 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"

class Phonebook {

	//member attributes

	public:

		Phonebook();
		~Phonebook();

		void	addContact();
		void	displayContacts();
		void	searchContact();

	private:
		Contact _contacts[8];
	// member functions

};

#endif
