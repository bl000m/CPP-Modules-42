/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:27:10 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/13 13:47:27 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include "Brain.hpp"

#include <iostream>

class Animal {

	public:

		Animal();
		Animal(std::string type);
		Animal(const Animal &source);
		virtual ~Animal();

		virtual Animal &operator=(const Animal &rightHandSide);

		std::string getType() const;
		virtual void makeSound() const ;

		virtual Brain *getBrain() const = 0;

	protected:
		std::string	_type;

};

#endif
