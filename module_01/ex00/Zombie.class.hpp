/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:43:47 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/15 13:04:50 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>

class Zombie {

	public:

		Zombie(std::string name);
		~Zombie();
		void	announce() const;

	private:
		std::string _name;

};

void 	randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
