/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:44:43 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/11 15:15:07 by mpagani          ###   ########.fr       */
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
		Fixed( const Fixed &source );
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw ) ;
		float	toFloat( void ) const;
		int 	toInt( void ) const;

    // overloaded member functions
		static Fixed& min(Fixed &leftSource, Fixed &rightSource);
		static const Fixed& min(const Fixed &leftSource, const Fixed &rightSource);
		static Fixed& max(Fixed &leftSource, Fixed &rightSource);
		static const Fixed& max(const Fixed &leftSource, const Fixed &rightSource);

    // copy assignment operator overload
		Fixed & operator=( const Fixed &rightSource );

    // 6 comparison operators overload
		bool operator>( const Fixed &rightSource ) const;
		bool operator<( const Fixed &rightSource ) const;
		bool operator>=( const Fixed &rightSource ) const;
		bool operator<=( const Fixed &rightSource ) const;
		bool operator==( const Fixed &rightSource ) const;
		bool operator!=( const Fixed &rightSource ) const;

    // 4 arithmetic operators overload
		Fixed operator+( const Fixed &rightSource ) const;
		Fixed operator-( const Fixed &rightSource ) const;
		Fixed operator*( const Fixed &rightSource ) const;
		Fixed operator/( const Fixed &rightSource ) const;

    // 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators
		Fixed & operator++( void );
		Fixed operator++( int );
		Fixed & operator--( void );
		Fixed operator--( int );


	private:

		int _numFixedPoint;
		static const int _bits = 8;


};
// insertion («) operator overload
std::ostream & operator<<( std::ostream & o, const Fixed &rightSource );

#endif
