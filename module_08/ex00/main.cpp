/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:35:08 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/04 15:06:45 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main(){
	std::list<int> intList;
	intList.push_back(1);
	intList.push_back(23);
	intList.push_back(45);
	try{
		std::list<int>::const_iterator it = easyfind(intList, 2);
		if (it != intList.end())
			std::cout << "You're lucky ! the number '" << *it << "' is present in the container !" << std::endl;
		else
			std::cerr << "Oh no... the number is not in the list." <<std::endl;
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
