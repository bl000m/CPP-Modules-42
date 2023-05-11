/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:59:06 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/11 12:20:49 by mathia           ###   ########.fr       */
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
					float exchangeRate = exchange.convertDependingOnDate(date, bitcoinQty);
					float dollars = exchangeRate * bitcoinQty;
					std::cout << date << " => " << bitcoinQty << " = " << "\e[0;33m" << dollars << "\e[0m" << std::endl;
				}
			catch (const std::exception & e) {
				std::cerr << "\e[0;31m" << e.what() << " => " << "\e[0m" << line << std::endl;
			}
		}
		else
			std::cerr << "\e[0;31m" << "Error: bad input => " << "\e[0m" << line << std::endl;
	}		
}

int main(int argc, char **argv){
	if (checkError(argc))
		return 1;
	std::ifstream file(argv[1]);
	if (!file.is_open()){
		std::cerr << "Error: could not open input file" << std::endl;
		return 1;
	}
	std::string line;
	std::getline(file, line);
	parse(file, line);
	file.close();
	return 0;
}
