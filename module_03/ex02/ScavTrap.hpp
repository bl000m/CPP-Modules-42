/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:06:02 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/12 12:19:19 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{

	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap(const ScavTrap &source);
		~ScavTrap();

		void attack( const std::string &target );
		void guardGate();

};

#endif
