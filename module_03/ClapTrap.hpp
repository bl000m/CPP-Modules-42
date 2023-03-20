/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:45:52 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 10:54:07 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	public:

		ClapTrap();
		ClapTrap( const ClapTrap &source );
		ClapTrap( const std::string name );
		~ClapTrap();

		void attack( const std::string &target );
		void takeDamage( unsigned int amount );
		void be Repaired( unsigned int amount );


	private:

		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

}

#endif
