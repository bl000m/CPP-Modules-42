/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:27:10 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/21 11:22:42 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>

class AAnimal {

	public:

		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &source);
		// why virtual ?
		virtual ~AAnimal();

		AAnimal &operator=(const AAnimal &rightHandSide);

		std::string getType() const;
		virtual void makeSound() const = 0;

	protected:
		std::string	_type;

};

#endif
