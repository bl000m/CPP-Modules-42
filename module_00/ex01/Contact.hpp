/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:13 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/06 11:15:51 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{

	public:

		Contact();
		~Contact();

		void	initContact();
		void	display();
		void	assigningIndex(int i);
		int		getIndex() const;

	private:

		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int			_index;

		std::string	_getInput(std::string str) const;
		std::string	_printFirstTenChar(std::string str) const;
};

#endif
