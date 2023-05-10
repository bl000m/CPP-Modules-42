/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:58:59 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/10 21:17:12 by mathia           ###   ########.fr       */
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
		BitcoinExchange();
		virtual ~BitcoinExchange();

		float convertDependingOnDate(std::string date, float bitcoinQty, std::map<std::string, float> &recordToCheck);
		int	checkDate(std::string date);
		int	checkBitcoinQty(float bitcoinQty);
		bool isLeapYear(int year);

	private:

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
