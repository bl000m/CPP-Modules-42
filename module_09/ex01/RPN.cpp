/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:29 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/08 15:16:40 by mpagani          ###   ########.fr       */
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
		return operand1 - operand2;
	if (oper == '*')
		return operand1 * operand2;
	if (oper == '/'){
		if (operand2 == 0)
			throw SomethingWrong("Error: cannot divide by 0");
		return operand1 / operand2;
	}
	return 0;
}

float RPN::givingTheResult(std::string expression){
	std::string operand;
	float operand1 = 0;
	float operand2 = 0;
	std::stack<float> operands;

	for (size_t i = 0; i < expression.length(); i++){
		if (isdigit(expression[i]))
			operand += expression[i];
		else if (isOperator(expression[i])){
			if (operands.size() != 2)
				throw SomethingWrong("Error: not enough operand to execute a RPN expression");
			operand1 = operands.top();
			operands.pop();
			operand2 = operands.top();
			operands.pop();
			operands.push(getResult(operand1, operand2, expression[i]));
		}
		else
			throw SomethingWrong("Error: invalid token");
		if (operand.empty() == 0){
			operands.push(atoi(operand.c_str()));
			operand.clear();
		}

	}
	return operands.top();
}
