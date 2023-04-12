/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:55:19 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/12 10:47:36 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){

	ClapTrap Blurp("Blurp");

	Blurp.attack("Vrum");
	Blurp.takeDamage(4);
	Blurp.takeDamage(4);
	Blurp.takeDamage(4);

	return (0);
}
