/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:12 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/08 15:13:18 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv){
	RPN rpn;
	float	result;

	result = 0;
	if (argc != 2){
		std::cerr << "Error: wrong number of args. To execute: ./RPN <Reverse Polish Notation expression>";
		return 1;
	}
	else{
		try{
			result = rpn.givingTheResult(argv[1]);
			std::cout << result << std::endl;
		}
		catch (const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}
