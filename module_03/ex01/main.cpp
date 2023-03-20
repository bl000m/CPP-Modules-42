/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:55:19 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 14:14:02 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){

	ScavTrap Scavblurp("SBlurp");
	ScavTrap ScavblurpCopy(Scavblurp);

	Scavblurp.guardGate();
	Scavblurp.attack("a shadow");
	ScavblurpCopy.takeDamage(15);
	ScavblurpCopy.beRepaired(20);
	ScavblurpCopy.takeDamage(106);

	return (0);
}
