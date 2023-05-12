/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:59:06 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/12 11:25:05 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int checkError(int numArgs){
	if (numArgs != 2){
		std::cerr << "Error: please type ./btc <input file name (file containing bitcoin to be converted in dollar depending on the related date)>" << std::endl;
		return 1;
	}
	std::ifstream file("data.csv");
	if (!file.is_open()){
		std::cerr << "Error: cannot open the database (data.csv). Check if it's available in the directory or if you have the right permissions" << std::endl;
		return 1;
	}
	file.close();
	return 0;
}

void parse(std::istream &file, std::string &line){
	BitcoinExchange exchange("data.csv");
	while (std::getline(file, line)){
		std::stringstream content(line);
		std::string date;
		float bitcoinQty;
		if (std::getline(content, date, '|') && content >> bitcoinQty)
		{
			try{
					exchange.checkDateChar(date);
					float exchangeRate = exchange.convertDependingOnDate(date, bitcoinQty);
					float dollars = exchangeRate * bitcoinQty;
					std::cout << date << " => " << bitcoinQty << " = " << "\e[0;33m" << dollars << "\e[0m" << std::endl;
				}
			catch (const std::exception & e) {
				std::cerr << "\e[0;31m" << e.what() << " => " << "\e[0m" << line << std::endl;
			}
		}
		else if (line.empty())
			continue;
		else
			std::cerr << "\e[0;31m" << "Error: bad input => " << "\e[0m" << line << std::endl;
	}
}

int main(int argc, char **argv){
	int isInt = 0;

	if (checkError(argc))
		return 1;
	std::ifstream file(argv[1]);
	if (!file.is_open()){
		std::cerr << "Error: could not open input file" << std::endl;
		return 1;
	}
	std::string line;
	std::getline(file, line);
	std::istringstream checkIfTitle(line);
	if (checkIfTitle >> isInt)
		file.seekg(0);
	parse(file, line);
	file.close();
	return 0;
}
