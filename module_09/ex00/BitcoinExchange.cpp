/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:58:44 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/11 07:52:44 by mathia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& dbFile){
	std::ifstream file(dbFile.c_str());
	if (!file.is_open())
		throw SomethingWrong("Error: cannt open database file");
	std::string line;
	while (std::getline(file, line))
	{
		std::stringstream reaading(line);
		std::string date;
		float price;
		if (std::getline(reaading, date, ',') && reaading >> price)
			_exchangeRates[date] = price;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
	*this = src;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	if (this != &src)
		this->_exchangeRates = src._exchangeRates;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(){}

//problem: it's taking always the exchangerate of the following line
float BitcoinExchange::convertDependingOnDate(std::string date, float bitcoinQty){
	if (checkBitcoinQty(bitcoinQty) == false)
		throw SomethingWrong("Error: bitcoin quantity must be between 0 and 1000");	
	if (checkDate(date) == false)
		throw SomethingWrong("Error: inexistent date");
	std::map<std::string, float>::const_iterator it = _exchangeRates.find(date);
	if (it == _exchangeRates.end())
	{
		it = _exchangeRates.upper_bound(date);
		if (it == _exchangeRates.begin())
			throw SomethingWrong("Error: invalid argument");
		--it;
	}
	return (it->second);
}

bool BitcoinExchange::isLeapYear(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool BitcoinExchange::checkDate(std::string date){
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

bool	BitcoinExchange::checkBitcoinQty(float bitcoinQty){
	if (bitcoinQty < 0 || bitcoinQty > 1000){	
		return false;
	}
	return true;
}
