/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:35:31 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/13 14:17:16 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

	public:

		Brain();
		Brain(const Brain &source);
		~Brain();

		Brain &operator=(const Brain &rightSideHand);

		std::string ideas[100];

};

#endif
