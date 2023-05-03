/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:17:20 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/03 15:30:28 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void printOut(const std::string &str){
	std::cout << str << std::endl;
}

int main(){
	printOut("------- creating a string array ------");
	std::string strArray[3] = {"first", "second", "third"};
	iter(strArray, strArray.length(), printOut());
}
