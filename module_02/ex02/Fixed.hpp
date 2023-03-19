/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:44:43 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 10:39:26 by mathiapagan      ###   ########.fr       */
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
    /* A static member function is independent of any object of the class.
    A static member function can be called even if no objects of the class exist.
    A static member function can also be accessed using the class name through the scope resolution operator.
    A static member function can access static data members and static member functions inside or outside of the class.
    Static member functions have a scope inside the class and cannot access the current object pointer.
You can also use a static member function to determine how many objects of the class have been created.
    The reason we need Static member function:
    Static members are frequently used to store information that is shared by all objects in a class.
    For instance, you may keep track of the quantity of newly generated objects of a specific class type using a static data member as a counter. This static data member can be increased each time an object is generated to keep track of the overall number of objects. */
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
		Fixed operator++( int /* source */ );
		Fixed & operator--( void );
		Fixed operator--( int /* source */ );


	private:

		int _numFixedPoint;
		static const int _bits = 8;


};
// insertion («) operator overload
std::ostream & operator<<( std::ostream & o, const Fixed &rightSource );

#endif
