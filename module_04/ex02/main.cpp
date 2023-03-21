/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:26:34 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/21 11:21:47 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	j->makeSound();
	i->makeSound();
	delete j;
	delete i;

	const AAnimal* animals[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
	for (int i = 0; i < 6; i++)
		delete animals[i];
	return 0;
}
