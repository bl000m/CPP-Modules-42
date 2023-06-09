/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:21:26 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/20 13:08:19 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

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
