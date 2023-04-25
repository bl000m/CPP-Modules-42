/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:44:43 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/11 11:46:23 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:

		Fixed();
		Fixed( const Fixed & source );
		~Fixed();

		Fixed & operator=( Fixed const & rightSource );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw ) ;

	private:

		int _numFixedPoint;
		static const int _bits = 8;

};

#endif
