/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:27:16 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/12 12:52:20 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap(const FragTrap &source);
		~FragTrap();

		void attack( const std::string &target );
		void highFivesGuys();

};

#endif
