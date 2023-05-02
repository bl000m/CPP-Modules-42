/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:25:23 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/02 17:52:47 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// remember to check : convert 1464.25 before pushing
int	main(int argc, char **argv){
	if (argc != 2){
		std::cout << "please type: ./convert <string literal rapresentation>" << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
