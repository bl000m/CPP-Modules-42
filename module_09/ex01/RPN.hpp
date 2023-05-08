/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:42 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/08 15:16:15 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stdexcept>
#include <map>
#include <stack>
#include <iostream>
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
