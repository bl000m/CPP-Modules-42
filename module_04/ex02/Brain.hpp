/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:35:31 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/21 10:51:03 by mpagani          ###   ########.fr       */
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

	protected:

		std::string _ideas[100];

};

#endif
