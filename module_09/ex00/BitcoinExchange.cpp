/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:58:44 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/08 13:59:33 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src){
	*this = src;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &rhs){
	if (&rhs != this)
	*this = rhs;
	return *this;
}

float BitcoinExchange::convertDependingOnDate(std::string date, float bitcoinQty, std::map<std::string, float> &recordToCheck){
	std::ifstream file("data.csv");
	// if (!file.is_open()){
	// 	throw SomethingWrong("Error: could not open data.csv");
	// }
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
	file.close();
	return dollars;
}

int	BitcoinExchange::checkDate(std::string date){
	std::istringstream fullDate(date);
	int year;
	int month;
	int day;
	char delimiter;

	if (fullDate >> year >> delimiter >> month >> delimiter >> day){
		if (year < 0){
			throw SomethingWrong("Error: year can't be negative !");
			return false;
		}
		if (month < 1){
			throw SomethingWrong("Error: month can't be < 1");
			return false;
		}
		if (day < 1){
			throw SomethingWrong("Error: day can't be < 1");
			return false;
		}
		if (month > 12
			|| ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
			|| ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)){
			throw SomethingWrong("Error: day is too higher for the specified month dude");
			return false;
			}
		if (month == 2){
			if (((year % 4 == 0 && year % 100 != 0) || (year % 4 && year % 100 == 0 && year % 400 == 0))){
				if (day > 29){
					throw SomethingWrong("Error: day is not valid for the specified month");
					return false;
				}
			}
			else{
				if (day > 28){
					throw SomethingWrong("Error: day is not valid for the specified month");
					return false;
				}
			}
		}
	}
	return true;
}

int	BitcoinExchange::checkBitcoinQty(float bitcoinQty){
	if (bitcoinQty < 0 || bitcoinQty > 1000){
		throw SomethingWrong("Error: bitcoin quantity must be between 0 and 1000");
		return false;
	}
	return true;
}
