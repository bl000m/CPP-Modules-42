/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:58:44 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/05 16:21:17 by mpagani          ###   ########.fr       */
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


