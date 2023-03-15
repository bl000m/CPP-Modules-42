/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:43:47 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/15 13:52:18 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>

class Zombie {

	public:

		Zombie();
		~Zombie();
		void	announce() const;
		void	setName(std::string name);

	private:
		std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
