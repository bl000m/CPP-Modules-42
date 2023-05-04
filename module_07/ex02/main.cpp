/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:08:29 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/04 12:18:56 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	{
		Array<std::string> strArray(3);
		strArray[0] = "First";
		strArray[1] = "Second";
		strArray[2] = "Third";

		Array<std::string> copy(strArray);
		std::cout << copy << std::endl;
		std::cout << strArray << std::endl;
	}
	{
		Array<int> intArray(3);
		intArray[0] = 1;
		intArray[1] = 2;
		intArray[2] = 3;

		std::cout << intArray << std::endl;
		try{
			std::cout << intArray[50] << std::endl;
		}
		catch (const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}
