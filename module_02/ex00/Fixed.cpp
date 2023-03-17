/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:57:38 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/17 15:05:58 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : _n(0){

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

	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " and " << rightSource.getRawBits() << std::endl;

	this->_n = rightSource.getRawBits();

	return *this;

}

int		Fixed::getRawBits( void ) const{

	return(this->_n);

}
void	Fixed::setRawBits( int const raw ){

	this->_n = raw;

}
