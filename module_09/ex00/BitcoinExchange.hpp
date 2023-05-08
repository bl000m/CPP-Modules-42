/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:58:59 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/08 13:44:33 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <stdexcept>
#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class BitcoinExchange {

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		virtual ~BitcoinExchange();

		BitcoinExchange & operator=(const BitcoinExchange &rhs);

		float convertDependingOnDate(std::string date, float bitcoinQty, std::map<std::string, float> &recordToCheck);
		int	checkDate(std::string date);
		int	checkBitcoinQty(float bitcoinQty);

	private:

	protected:
		class SomethingWrong : public std::exception {
			public:
				SomethingWrong(const char *msg) : message(msg) {}
				virtual const char*what() const throw(){
					return message.c_str();
				}
				virtual ~SomethingWrong() throw() {}
			private:
				std::string message;
		};
};

#endif
