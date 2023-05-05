/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:59:06 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/05 16:55:54 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>
#include <iostream>
#include <fstream>
#include <string>


int main(){
	std::map<std::string, int> recordToCheck;
	std::string file_name("input.txt");
	std::ifstream file(file_name.c_str());
	if (!file.is_open()){
		std::perror(file_name.c_str());
		return 1;
	}
	std::string line;
	std::getline(file, line);
	parse(line); 
	file.close();
	return 0;
}
