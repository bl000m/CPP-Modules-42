/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:59:06 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/07 06:47:07 by mathia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>
#include <iostream>
#include <fstream>
#include <string>

void parse(std::map<std::string, int>, std::string line){
	
}

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
	parse(recordToCheck, line); 
	file.close();
	return 0;
}
