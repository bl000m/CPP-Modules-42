/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:59:06 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/08 14:26:11 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int checkError(int numArgs){
	if (numArgs != 2){
		std::cerr << "Error: please type ./btc <input file name (file containing bitcoin to be converted in dollar depending on the related date)>" << std::endl;
		return 1;
	}
	std::ifstream file("data.csv");
	if (!file.is_open()){
		std::perror("data.csv");
		file.close();
		return 1;
	}
	return 0;
}

void parse(std::map<std::string, float> &recordToCheck, std::istream &file, std::string &line){
	BitcoinExchange exchange;
	while (std::getline(file, line)){
		std::stringstream content(line);
		std::string date;
		float bitcoinQty;
		if (std::getline(content, date, '|') && content >> bitcoinQty)
		{
			try{
				if (exchange.checkDate(date) == true && exchange.checkBitcoinQty(bitcoinQty) == true){
					float dollars = exchange.convertDependingOnDate(date, bitcoinQty, recordToCheck);
					std::cout << date << " => " << bitcoinQty << " = " << dollars << std::endl;
				}
			}
			catch (const std::exception & e) {
				std::cerr << e.what() << std::endl;
			}
		}
		else
			std::cerr << "Error: bad input => " << line << std::endl;
	}
}

int main(int argc, char **argv){
	if (checkError(argc))
		return 1;
	std::map<std::string, float> recordToCheck;
	std::ifstream file(argv[1]);
	if (!file.is_open()){
		std::perror(argv[1]);
		return 1;
	}
	std::string line;
	std::getline(file, line); // first getline to jump the first line
	parse(recordToCheck, file, line);
	file.close();
	return 0;
}
