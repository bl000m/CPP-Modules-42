/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:55:19 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 14:46:39 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){

	FragTrap Fragblurp("SBlurp");
	FragTrap FragblurpCopy(Fragblurp);

	Fragblurp.attack("a shadow");
	FragblurpCopy.takeDamage(15);
	FragblurpCopy.beRepaired(20);
	FragblurpCopy.takeDamage(106);
	Fragblurp.highFivesGuys();

	return (0);
}
