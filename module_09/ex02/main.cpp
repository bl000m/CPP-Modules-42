/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:12 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/11 10:56:22 by mathia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

int main(int argc, char **argv){
	if (argc < 2){
		std::cerr << "Error: wrong number of args.";
		return 1;
	}
	for (int i = 1; i < argc; i++) {
        if (std::atoi(argv[i]) <= 0) {
            std::cerr << "Error: invalid input." << std::endl;
            return 1;
        }
    }

	PMergeMe order(argv, argc);
	
	try{
		std::cout << order << std::endl;
		order.sort();
		std::cout << order << std::endl;
		order.printTimeElapsed();
	}
	catch (const std::invalid_argument &e){
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
