/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:57:38 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/11 14:37:55 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _numFixedPoint(0){

	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed( const int num ) : _numFixedPoint( num << _bits ){

	std::cout << "Int constructor called" << std::endl;

}

/* 	1 << 8 == 00000001 switched left of 8 => 100000000 == 256 (max 8 bits capacity)
	if num = 2,2 => 2,2 * 256 = 563.2 => round(563.2) = 563
	563(in decimal basis) = 1000110011 (binary) = 10.00110011
  	(fixed point/8bits from right side for decimal)= 2.19921875(in decimal)
*/
Fixed::Fixed( const float num ) : _numFixedPoint(roundf( num * ( 1 << _bits ) ) ){

	std::cout << "Float constructor called" << std::endl;

}

Fixed::Fixed( Fixed const & source ){

	std::cout << "Copy constructor called" << std::endl;
	*this = source;

}

Fixed::~Fixed(){

	std::cout << "Destructor called" << std::endl;

}

Fixed & Fixed::operator=( Fixed const & rightSource ){

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rightSource)
		this->_numFixedPoint = rightSource.getRawBits();

	return *this;

}

std::ostream & operator<<( std::ostream & o, Fixed const & rightSource ){

	o << rightSource.toFloat();
	return o;

}

int		Fixed::getRawBits( void ) const{

	return(this->_numFixedPoint);

}
void	Fixed::setRawBits( int const raw ){

	this->_numFixedPoint = raw;

}

float	Fixed::toFloat( void ) const{

  return (static_cast<float>( this->getRawBits() ) / ( 1 << _bits ));

}

int 	Fixed::toInt( void ) const{

	return (this->_numFixedPoint >> _bits);

}
