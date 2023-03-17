/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:57:38 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/17 14:08:13 by mpagani          ###   ########.fr       */
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

	std::cout << "Assignation operator called from" << this->_n;
	std::cout << "and" << rightSource._n << std::endl;

}

int		Fixed::getRawBits( void ) const{

}
void	Fixed::setRawBits( int const raw ){

}
