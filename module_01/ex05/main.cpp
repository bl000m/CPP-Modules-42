/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:13:56 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/19 09:44:36 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl robot;
	std::string	input;

	while (input.compare("EXIT")){
	std::cout << "please enter a level (DEBUG, INFO, WARNING, ERROR) or EXIT" << std::endl;
	std::cin >> input;
	robot.complain(input);
	}
	return(0);
}
