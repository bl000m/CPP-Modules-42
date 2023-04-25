/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:52:14 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/13 15:44:23 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{

	public:

		Dog();
		~Dog();
		Dog(const Dog &source);
		Dog &operator=(const Dog &rightHandSide);
		Animal &operator=(const Animal &rightHandSide);

		void makeSound() const;

		Brain *getBrain() const;

	private:

		Brain *_brain;
};

#endif
