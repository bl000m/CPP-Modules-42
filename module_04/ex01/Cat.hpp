/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:52:14 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/13 14:02:06 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat: public Animal{

	public:

		Cat();
		~Cat();
		Cat(const Cat &source);
		Cat &operator=(const Cat &rightHandSide);
		Animal &operator=(const Animal &rightHandSide);

		void makeSound() const;

		Brain *getBrain() const;

	private:

		Brain *_brain;
};

#endif
