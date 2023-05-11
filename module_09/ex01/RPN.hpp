/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:42 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/11 08:56:15 by mathia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stdexcept>
#include <stack>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

class RPN {

	public:
		RPN();
		RPN(const RPN &src);
		virtual ~RPN();

		RPN & operator=(const RPN &rhs);
		float givingTheResult(std::string expression);
		float getResult(float operand1, float operand2, char oper);
		int	isOperator(char token);

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
