/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:26:34 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 16:38:46 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	// const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	// i->makeSound(); //will output the cat sound!
	meta->makeSound();
	delete j;
	delete meta;

	return 0;
}
