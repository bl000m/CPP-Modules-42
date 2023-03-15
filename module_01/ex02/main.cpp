/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:42:31 by mpagani           #+#    #+#             */
/*   Updated: 2023/03/15 14:11:00 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(){

	std::string message = "HI THIS IS BRAIN";
	std::string *stringPTR = &message;
	std::string &stringREF = message;

	std::cout << &message << " = " << message << std::endl;
	std::cout << stringPTR << " = " << *stringPTR << std::endl;
	std::cout << &stringREF << " = " << stringREF << std::endl;

	return (0);
}
