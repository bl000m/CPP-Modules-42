/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:52:14 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/21 11:21:00 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{

	public:

		Dog();
		~Dog();
		Dog(const Dog &source);
		Dog &operator=(const Dog &rightHandSide);

		void makeSound() const;

	private:

		Brain *_brain;
};

#endif
