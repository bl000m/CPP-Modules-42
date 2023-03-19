/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:21:26 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:50:47 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP

#include <iostream>

class Weapon {

	public:

		Weapon(std::string type);
		~Weapon();
		const std::string&	getType() const;
		void	setType(std::string type);

	private:

		std::string _type;

};

#endif
