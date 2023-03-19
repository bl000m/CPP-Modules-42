/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:57:38 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 10:42:03 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _numFixedPoint(0){

	std::cout << "Default constructor called, n initialized with 0 value" << std::endl;

	return;

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

int		Fixed::getRawBits( void ) const{

	return(this->_numFixedPoint);

}
void	Fixed::setRawBits( int const raw ){

	this->_numFixedPoint = raw;

}
