/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:44:43 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/11 12:21:20 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	public:

		Fixed();
		Fixed( const int num );
		Fixed( const float num );
		Fixed( Fixed const & source );
		~Fixed();

		Fixed & operator=( Fixed const & rightSource );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int 	toInt( void ) const;

	private:

		int _numFixedPoint;
		static const int _bits = 8;


};

std::ostream & operator<<( std::ostream & o, Fixed const & rightSource );

#endif
