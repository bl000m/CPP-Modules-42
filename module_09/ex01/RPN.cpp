/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:29 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/08 16:11:23 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN &src){
	*this = src;
}

RPN & RPN::operator=(const RPN &rhs){
	if (&rhs != this)
	*this = rhs;
	return *this;
}

int	RPN::isOperator(char token){
	return (token == '+' || token == '-' || token == '*' || token == '/');
}

float RPN::getResult(float operand1, float operand2, char oper){
	if (oper == '+')
		return operand1 + operand2;
	if (oper == '-')
		return operand2 - operand1;
	if (oper == '*')
		return operand1 * operand2;
	if (oper == '/'){
		if (operand1 == 0)
			throw SomethingWrong("Error: cannot divide by 0");
		return operand2 / operand1;
	}
	else
        throw SomethingWrong("Error: invalid operator");
}

float RPN::givingTheResult(std::string expression){
	std::string operand;
	float operand1 = 0;
	float operand2 = 0;
	float result = 0;
	std::stack<float> operands;

	for (size_t i = 0; i < expression.length(); i++){
		if (expression[i] == ' ')
			continue;
		if (isdigit(expression[i]))
			operand += expression[i];
		else if (isOperator(expression[i])){
			if (operands.size() < 2)
				throw SomethingWrong("Error: not enough operand to execute a RPN expression");
			operand1 = operands.top();
			operands.pop();
			operand2 = operands.top();
			operands.pop();
			result = getResult(operand1, operand2, expression[i]);
			operands.push(result);
		}
		else
				throw SomethingWrong("Error: invalid token");
		if (operand.empty() == 0){
			operands.push(atof(operand.c_str()));
			operand.clear();
		}
	}
	if (operands.size() != 1)
		throw SomethingWrong("Error: too many operands");

	return operands.top();
}
