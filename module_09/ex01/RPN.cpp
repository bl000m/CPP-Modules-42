/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:29 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/11 11:04:13 by mathia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN &src){
	*this = src;
}

RPN & RPN::operator=(const RPN &rhs){
	if (this != &rhs){
		RPN temp(rhs);
		std::swap(*this, temp);
	}
	return *this;
}

int	RPN::isOperator(char token){
	return (token == '+' || token == '-' || token == '*' || token == '/');
}

float RPN::getResult(float operand1, float operand2, char oper){
 switch (oper) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand2 - operand1;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand1 == 0)
                throw SomethingWrong("Error: cannot divide by 0");
            return operand2 / operand1;
        default:
            throw SomethingWrong("Error: invalid operator");
    }
}

float RPN::givingTheResult(std::string expression){
	std::string operand;
	float operand1 = 0;
	float operand2 = 0;
	float result = 0;
	std::stack<float> operandsContainer;

	for (size_t i = 0; i < expression.length(); i++){
		if (expression[i] == ' ')
			continue;
		if (isdigit(expression[i]))
			operand += expression[i];
		else if (isOperator(expression[i])){
			if (operandsContainer.size() < 2)
				throw SomethingWrong("Error: not enough operands to execute a RPN expression");
			operand1 = operandsContainer.top();
			operandsContainer.pop();
			operand2 = operandsContainer.top();
			operandsContainer.pop();
			result = getResult(operand1, operand2, expression[i]);
			operandsContainer.push(result);
		}
		else
			throw SomethingWrong("Error: invalid token");
		if (operand.empty() == 0){
			operandsContainer.push(static_cast<float>(atof(operand.c_str())));
			operand.clear();
		}
	}
	if (operandsContainer.size() != 1)
		throw SomethingWrong("Error: too many operands");

	return operandsContainer.top();
}
