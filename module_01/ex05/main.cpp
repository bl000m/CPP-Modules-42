/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:13:56 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/16 18:39:30 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int	main(void)
{
	Harl robot;
	std::string	input;

	while (input.compare("EXIT")){
	std::cout << "please enter a level (DEBUG, INFO, WARNING, ERROR or EXIT)" << std::endl;
	std::cin >> input;
	robot.complain(input);
	}
	return(0);
}
