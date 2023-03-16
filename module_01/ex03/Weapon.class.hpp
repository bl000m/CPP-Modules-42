/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:21:26 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/16 10:35:55 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>

class Weapon {

	public:

		Weapon();
		~Weapon();
		std::string	getType() const;
		void	setType(std::string type);

	private:

		std::string _type;

};

#endif
