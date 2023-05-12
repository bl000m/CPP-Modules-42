/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:58:59 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/12 11:10:43 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <stdexcept>
#include <map>
#include <fstream>
#include <string>
#include <sstream>

class BitcoinExchange {

	public:
		BitcoinExchange(const std::string& dbFile);
		BitcoinExchange(const BitcoinExchange& src);
		virtual ~BitcoinExchange();

		BitcoinExchange&	operator=(const BitcoinExchange& src);

		float convertDependingOnDate(std::string date, float bitcoinQty);
		bool checkDate(std::string date);
		bool checkDateChar(std::string date);
		bool	checkBitcoinQty(float bitcoinQty);
		bool isLeapYear(int year);

	private:
		std::map<std::string, float> _exchangeRates;

	protected:
		class SomethingWrong : public std::exception {
			public:
				SomethingWrong(const char *msg) : _message(msg) {}
				virtual const char*what() const throw(){
					return _message.c_str();
				}
				virtual ~SomethingWrong() throw() {}
			private:
				std::string _message;
		};
};

#endif
