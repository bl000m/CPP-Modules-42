/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:26:34 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/21 11:09:02 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* a = new Animal();
	j->makeSound();
	i->makeSound();
	a->makeSound();
	delete j;
	delete i;
	delete a;

	const Animal* animals[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
	for (int i = 0; i < 6; i++)
		delete animals[i];
	return 0;
}
