/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:12 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/10 13:40:46 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"
#include <iostream>
#include <stdexcept>
#include <map>
#include <stack>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <algorithm>

// still to check if args are valid positive int (and not char for example)
// and protect better the conversion in the constructor: atoi is not enough in case of not valid token
int main(int argc, char **argv){
	PMergeMe order(argv, argc);

	if (argc < 2){
		std::cerr << "Error: wrong number of args.";
		return 1;
	}
	else{
		try{
			// std::cout << "test" << std::endl;
			std::cout << order << std::endl; // print sorted == false
			order.sort();
			std::cout << order << std::endl; // print sorted == true
			order.printTimeElapsed();
			// order.printTimeTracked();
		}
		catch (const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}
