/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:43:27 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:58:28 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	zombie instance allocate on the stack
	because instance not needs to be used outside this scope (no return)
*/
void randomChump( std::string name ){

	Zombie zombie(name);
	zombie.announce();

}
