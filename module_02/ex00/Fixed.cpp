/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:57:38 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/11 11:45:23 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _numFixedPoint(0){

	std::cout << "Default constructor called" << std::endl;

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

	std::cout << "Copy assignment operator called" << std::endl;

	this->_numFixedPoint = rightSource.getRawBits();

	return *this;

}

int		Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return(this->_numFixedPoint);

}
void	Fixed::setRawBits( int const raw ){

	this->_numFixedPoint = raw;

}
