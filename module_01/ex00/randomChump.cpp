/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:43:27 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/15 12:00:06 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

/*	zombie instance allocate on the stack
	because instance not needs to be used outside this scope (no return)
*/
void randomChump( std::string name ){

	Zombie zombie(name);
	zombie.announce();

}
