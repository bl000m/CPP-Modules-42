/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:17:20 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/03 15:33:35 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void printOut(const T &arrayItem){
	std::cout << arrayItem << std::endl;
}

int main(){
	printOut("------- creating a string array ------");
	std::string strArray[3] = {"first", "second", "third"};
	iter(strArray, 3, printOut);
	printOut("------- creating an int array ------");
	int intArray[3] = {1, 2, 3};
	iter(intArray, 3, printOut);
}
