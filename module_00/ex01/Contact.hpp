/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:13 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:55:16 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream> // std::cout std::endl
#include <iomanip> // set::setw

class Contact{

	//member attributes
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
