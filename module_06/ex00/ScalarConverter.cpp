/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:23:14 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/02 17:51:02 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* ------------ convert function ----------------*/

void ScalarConverter::convert(const std::string &literal){
	if (literal.length() < 1) {
		std::cout << "The input can't be empty" << std::endl;
		return ;
	}
	if (literal == "nanf" || literal == "nan")
		displaySpecificCases("nanf", "nan");
	else if (literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff")
		displaySpecificCases("inff", "inf");
	else if (literal == "-inf" || literal == "-inff")
		displaySpecificCases("-inff", "-inf");
	else if (checkInt(literal))
		displayInt(literal);
	else if (checkFloat(literal))
		displayDouble(literal);
	else if (checkDouble(literal))
		displayDouble(literal);
	else if (std::isprint(literal[0]) && literal.length() == 1)
		displayChar(literal);
	else
		std::cout << "Token not recognized" << std::endl;

}

/* ------------ checking ----------------*/

bool ScalarConverter::checkInt(const std::string &literal){
	int count = 0;

	while (literal[count] == '+' || literal[count] == '-')
		count++;
	for (size_t i = count; i < literal.length(); i++){
		if (!isdigit(literal[i]))
			return false;
	}
	return true;
}

bool ScalarConverter::checkFloat(const std::string &literal){
	float	check;
	std::stringstream stream(literal);
	stream >> check;
	if (!stream.fail() && literal.at(literal.length() - 1) == 'f'){
		return true;
	}
	return false;
}

bool ScalarConverter::checkDouble(const std::string &literal){
	double	check;
	std::stringstream stream(literal);
	stream >> check;
	if (!stream.fail() && !stream.eof() && literal.at(literal.length() - 1) <= 57 && literal.at(literal.length() - 1) >= 48){
		return true;
	}
	return false;
}

/* ------------ displaying ----------------*/

void ScalarConverter::displaySpecificCases(std::string floatInp, std::string doubleInp){
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << floatInp << std::endl;
	std::cout << "double: " << doubleInp << std::endl;
}

void ScalarConverter::displayChar(const std::string &literal){
	char x = literal[0];
	std::cout << "char: '" << x << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << "float: " << static_cast<float>(x) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << ".0" << std::endl;

}

void ScalarConverter::displayInt(const std::string &literal){
	int convertedInt;
	std::istringstream check(literal);
	check >> convertedInt;

	char x = static_cast<char>(convertedInt);
	isprint(x) ? std::cout << "char: '" << x << "'" << std::endl : std::cout << "char: Non displayable" << x << std::endl;
	if (convertedInt > INT_MIN && convertedInt < INT_MAX)
		std::cout << "int: " << convertedInt << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(convertedInt) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(convertedInt) << ".0" << std::endl;
}

void ScalarConverter::displayFloat(const std::string &literal){
	float	convertedFloat;
	std::stringstream stream(literal);
	stream >> convertedFloat;

	char x = static_cast<char>(convertedFloat);
	isprint(x) ? std::cout << "char: '" << x << "'" << std::endl : std::cout << "char: Non displayable" << x << std::endl;
	if (convertedFloat > static_cast<float>(INT_MIN) && convertedFloat < static_cast<float>(INT_MAX))
		std::cout << "int: " << static_cast<int>(convertedFloat) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(convertedFloat) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(convertedFloat) << ".0" << std::endl;
}

void ScalarConverter::displayDouble(const std::string &literal){
	double	convertedDouble;
	std::stringstream stream(literal);
	stream >> convertedDouble;

	char x = static_cast<char>(convertedDouble);
	isprint(x) ? std::cout << "char: '" << x << "'" << std::endl : std::cout << "char: Non displayable" << x << std::endl;
	if (convertedDouble > static_cast<double>(INT_MIN) && convertedDouble < static_cast<double>(INT_MAX))
		std::cout << "int: " << static_cast<int>(convertedDouble) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(convertedDouble) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(convertedDouble) << ".0" << std::endl;

}
