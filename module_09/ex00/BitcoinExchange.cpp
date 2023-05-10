/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:58:44 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/10 21:16:35 by mathia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

float BitcoinExchange::convertDependingOnDate(std::string date, float bitcoinQty, std::map<std::string, float> &recordToCheck){
	std::ifstream file("data.csv");
	std::string record;
	std::stringstream line;
	std::string dateToSearch;
	float exchangeRate;
	float dollars;
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

bool BitcoinExchange::isLeapYear(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int BitcoinExchange::checkDate(std::string date){
    std::istringstream fullDate(date);
    int year;
    int month;
    int day;
    char delimiter;

    if (fullDate >> year >> delimiter >> month >> delimiter >> day){
    	int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (year < 0){
            throw SomethingWrong("Error: wrong year");
            return false;
        }
        if (month < 1 || month > 12){
            throw SomethingWrong("Error: wrong month");
            return false;
        }
        if (day < 1 || day > daysInMonth[month - 1]
			|| (month == 2 && day == 29 && !isLeapYear(year))){
            throw SomethingWrong("Error: wrong day");
			std::cout << "=> " << std::endl;
            return false;
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
