/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:42:13 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/14 12:30:06 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

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
		int		getIndex();

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
