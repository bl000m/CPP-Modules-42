/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:43:03 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:58:34 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	zombie instance allocate on the heap (dinamically)-> new/delete,
	because the instance is in the return and need to be used in other scopes
*/
Zombie* newZombie( std::string name ){

	Zombie *zombie = new Zombie(name);
	return (zombie);

}
