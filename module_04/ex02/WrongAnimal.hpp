/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:27:10 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 17:27:43 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &source);
		// why virtual ?
		virtual ~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &rightHandSide);

		std::string getType() const;
		virtual void makeSound() const ;

	protected:
		std::string	_type;

};

#endif
