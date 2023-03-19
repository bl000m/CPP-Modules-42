/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:43:47 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:58:08 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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
