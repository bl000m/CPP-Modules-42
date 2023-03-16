/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:42:31 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/16 10:40:07 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

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
