/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:44:43 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/17 13:56:41 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed {

	public:

		Fixed();
		Fixed( int n );
		Fixed( Fixed const & source );
		~Fixed();

		Fixed & operator=( Fixed const & rightSource );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw ) ;

	private:

		int _n;
		static const int _bits = 8;


};

#endif
