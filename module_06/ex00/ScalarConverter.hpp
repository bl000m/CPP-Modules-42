/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:18:39 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/02 16:59:14 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <climits>
#include <sstream>
#include <bits/stdc++.h>

class ScalarConverter {

	public:
		static void convert(const std::string &literal);

	private:
		static bool checkInt(const std::string &literal);
		static bool checkFloat(const std::string &literal);
		static bool checkDouble(const std::string &literal);
		static void displaySpecificCases(std::string floatInp, std::string doubleInp);
		static void displayChar(const std::string &literal);
		static void displayInt(const std::string &literal);
		static void displayFloat(const std::string &literal);
		static void displayDouble(const std::string &literal);
		ScalarConverter();

};

#endif
