/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:12 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/09 11:03:40 by mpagani          ###   ########.fr       */
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

int main(int argc, char **argv){
	PMergeMe order(argv, argc);
	
	if (argc < 2){
		std::cerr << "Error: wrong number of args.";
		return 1;
	}
	else{
		try{
			std::cout << "test" << std::endl;
			// std::cout << order << std::endl;
		}
		catch (const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}
