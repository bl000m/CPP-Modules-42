/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:42:31 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:58:43 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){

	std::string name;

	std::cout << "creating first zombie in the stack" << std::endl;
	std::cout << "please write a name for it: " << std::endl;
	std::cin >> name;

	randomChump(name);

	std::cout << "creating second zombie in the heap" << std::endl;
	std::cout << "please write a name for it: " << std::endl;
	std::cin >> name;

	Zombie *zombieHeap = newZombie(name);
	zombieHeap->announce();
	delete zombieHeap;

	return (0);
}
