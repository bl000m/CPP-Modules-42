/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:43:03 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/07 12:10:13 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	zombie instance allocate on the heap (dinamically)-> new/delete,
	because the instance is in the return and need to be used in other scopes */
Zombie* newZombie( std::string name ){

	Zombie *zombie = new Zombie(name);
	return (zombie);

}
