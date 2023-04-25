/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:57:38 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/11 15:21:26 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _numFixedPoint(0){

}

Fixed::Fixed( const int num ) : _numFixedPoint( num << _bits ){

}

/* 1 << 8 == 00000001 switched left of 8 => 100000000 == 256 (max 8 bits capacity)
	if num = 2,2 => 2,2 * 256 = 563.2 => round(563.2) = 563
	563(in decimal basis) = 1000110011 (binary) = 10.00110011
  (fixed point/8bits from right side for decimal)= 2.1875(in decimal)
	*/
Fixed::Fixed( const float num ) : _numFixedPoint( roundf( num * ( 1 << _bits ) ) ){

}

Fixed::Fixed( const Fixed &source ){

	*this = source;

}

Fixed::~Fixed(){

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

/* ------------ Overloaded member functions ----------------*/

Fixed& Fixed::min(Fixed &leftSource, Fixed &rightSource){
  return leftSource.getRawBits() < rightSource.getRawBits() ? leftSource : rightSource;
}

const Fixed& Fixed::min(const Fixed &leftSource, const Fixed &rightSource){
  return leftSource.getRawBits() < rightSource.getRawBits() ? leftSource : rightSource;
}

Fixed& Fixed::max(Fixed &leftSource, Fixed &rightSource){
  return leftSource.getRawBits() > rightSource.getRawBits() ? leftSource : rightSource;
}

const Fixed& Fixed::max(const Fixed &leftSource, const Fixed &rightSource){
  return leftSource.getRawBits() > rightSource.getRawBits() ? leftSource : rightSource;
}

/* ------------ Assignment operator ----------------*/

Fixed & Fixed::operator=( const Fixed &rightSource ){

  if (this != &rightSource)
	  this->_numFixedPoint = rightSource.getRawBits();

	return *this;

}

/* ------------ Comparison operator ----------------*/
bool Fixed::operator>( const Fixed &rightSource ) const{
  return (this->getRawBits() > rightSource.getRawBits());
}
bool Fixed::operator<( const Fixed &rightSource ) const{
  return (this->getRawBits() < rightSource.getRawBits());
}
bool Fixed::operator>=( const Fixed &rightSource ) const{
  return (this->getRawBits() >= rightSource.getRawBits());
}
bool Fixed::operator<=( const Fixed &rightSource ) const{
  return (this->getRawBits() <= rightSource.getRawBits());
}
bool Fixed::operator==( const Fixed &rightSource ) const{
  return (this->getRawBits() == rightSource.getRawBits());
}
bool Fixed::operator!=( const Fixed &rightSource ) const{
  return (this->getRawBits() != rightSource.getRawBits());
}

/* ------------ Arithmetic operators ----------------*/
Fixed Fixed::operator+( const Fixed &rightSource ) const{
  return Fixed(this->toFloat() + rightSource.toFloat());
}
Fixed Fixed::operator-( const Fixed &rightSource ) const{
  return Fixed(this->toFloat() - rightSource.toFloat());
}
Fixed Fixed::operator*( const Fixed &rightSource ) const{
  return Fixed(this->toFloat() * rightSource.toFloat());
}
Fixed Fixed::operator/( const Fixed &rightSource ) const{
  return Fixed(this->toFloat() / rightSource.toFloat());
}

/* ------------ Increment/decrement operators ----------------*/

Fixed & Fixed::operator++(void){
  ++this->_numFixedPoint;
  return *this;
}

Fixed Fixed::operator++( int ){
  Fixed updatedInstance( *this );
  updatedInstance._numFixedPoint = this->_numFixedPoint++;
  return updatedInstance;
}

Fixed & Fixed::operator--(void){
  --this->_numFixedPoint;
  return *this;
}

Fixed Fixed::operator--( int ){
  Fixed updatedInstance( *this );
  updatedInstance._numFixedPoint = this->_numFixedPoint--;
  return updatedInstance;
}

/* ------------ Insertion («) operator ----------------*/

std::ostream & operator<<( std::ostream & o, const Fixed &rightSource ){

	o << rightSource.toFloat();
	return o;

}
