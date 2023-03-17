/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:57:38 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/17 16:58:30 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : _numFixedPoint(0){

	std::cout << "Default constructor called, n initialized with 0 value" << std::endl;

	return;

}

Fixed::Fixed( const int num ) : _numFixedPoint( num << _bits ){

	std::cout << "Int to Fixed Point Constructor" << std::endl;

}

/* 1 << 8 == 00000001 switched left of 8 => 100000000 == 256 (max 8 bits capacity)
	if num = 2,2 => 2,2 * 256 = 563.2 => round(563.2) = 563
	563(in decimal basis) = 10001100(11) (binary) = 10.001100(11) (fixed point)= 2.1875(in decimal)
	*/
Fixed::Fixed( const float num ) : _numFixedPoint(roundf(num * (1 << _bits))){

	std::cout << "Float to Fixed Point Constructor" << std::endl;

}

Fixed::Fixed( Fixed const & source ){

	std::cout << "Copy constructor called" << std::endl;
	*this = source;

	return;

}

Fixed::~Fixed(){

	std::cout << "Destructor called" << std::endl;

	return;

}

Fixed & Fixed::operator=( Fixed const & rightSource ){

	std::cout << "Assignation operator called from " << this->_numFixedPoint;
	std::cout << " and " << rightSource.getRawBits() << std::endl;

	this->_numFixedPoint = rightSource.getRawBits();

	return *this;

}

std::ostream & operator<<( std::ostream & o, Fixed const & rightSource ){

	o << rightSource.getRawBits();

	return o;

}

int		Fixed::getRawBits( void ) const{

	return(this->_numFixedPoint);

}
void	Fixed::setRawBits( int const raw ){

	this->_numFixedPoint = raw;

}

float	Fixed::toFloat( void ) const{

	float num;

	// std::cout << "Fixed point to Float" << std::endl;
	num = this->_numFixedPoint / (1 << this->_bits);

	return (num);
}

int 	Fixed::toInt( void ) const{

	int num;

	// std::cout << "Fixed point to Int" << std::endl;
	num = this->_numFixedPoint >> this->_bits;

	return (num);

}
