/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:14:24 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/16 18:22:49 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

#include <iostream>
#include <vector>

class Harl {

	public:

		Harl();
		~Harl();
		void complain( std::string level );

	private:

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

};

typedef void (Harl::*fun) (void);

#endif
