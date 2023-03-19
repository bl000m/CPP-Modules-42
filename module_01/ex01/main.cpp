/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:42:31 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 10:19:53 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

# define N 4

int	main(void){

	std::string name;

	std::cout << "creating << N << orde of zombies" << std::endl;
	std::cout << "please write a name for them: " << std::endl;
	std::cin >> name;

	Zombie *zombies = zombieHorde(N, name);
	for (int i = 0; i < N; i++){
		zombies[i].announce();
	}
	delete [] zombies;

	return (0);
}
