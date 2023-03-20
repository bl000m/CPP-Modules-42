/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:52:14 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 18:15:06 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"


class Cat: public Animal{

	public:

		Cat();
		~Cat();

		void makeSound() const;

	private:

		Brain *_brain;
};

#endif
