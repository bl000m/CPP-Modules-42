/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:59:06 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/08 11:54:10 by mpagani          ###   ########.fr       */
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
	return 0;
}

float convertDependingOnDate(std::string date, float bitcoinQty, std::map<std::string, float> &recordToCheck){
	std::ifstream file("data.csv");
	if (!file.is_open()){
		std::perror("data.csv");
		return 1;
	}
	std::string record;
	std::stringstream line;
	std::string dateToSearch;
	float exchangeRate;
	float dollars;
	// std::cout << date << std::endl;
	while(std::getline(file, record)){
		line.clear();
		line.str(record);
		if (std::getline(line, dateToSearch, ',') && line >> exchangeRate){
			if (dateToSearch >= date){
				recordToCheck.insert(std::make_pair(dateToSearch, exchangeRate));
				break ;
			}
		}
	}
	dollars = bitcoinQty * recordToCheck[dateToSearch];
	return dollars;
}

int	checkDate(std::string date){
	(void) date;
	std::istringstream fullDate(date);
	int year;
	int month;
	int day;
	char delimiter;

	if (fullDate >> year >> delimiter >> month >> delimiter >> day){
		if (year < 0 || month < 0 || day < 0)
			return false;
		if (month > 12
			|| ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
			|| ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
			return false;
		if (month == 2){
			if (((year % 4 == 0 && year % 100 != 0) || (year % 4 && year % 100 == 0 && year % 400 == 0))){
				if (day > 29)
					return false;
			}
			else{
				if (day > 28)
					return false;
			}
		}
	}
	return true;
}

void parse(std::map<std::string, float> &recordToCheck, std::istream &file, std::string &line){
	while (std::getline(file, line)){
		std::stringstream content(line);
		std::string date;
		float bitcoinQty;
		if (std::getline(content, date, '|') && content >> bitcoinQty)
		{
			try{
				float dollars = convertDependingOnDate(date, bitcoinQty, recordToCheck);
				if (checkDate(date) == true)
				// if (!checkDate(date) && !checkBitcoinQty(bitcoinQty))
					std::cout << date << " => " << bitcoinQty << " = " << dollars << std::endl;
			}
			catch (const std::exception & e) {
				std::cerr << e.what() << std::endl;
			}
			// std::cout << "date:" << date << std::endl;
			// std::cout << "bitcoinQty:" << bitcoinQty << std::endl;
			// recordToCheck.insert(std::make_pair(date, bitcoinQty));
		}
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
