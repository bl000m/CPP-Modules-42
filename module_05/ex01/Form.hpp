/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:57:09 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/25 17:53:56 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Form {

	public:
		// Form();
		Form(std::string name, int execGrade, int signGrade);
		Form(Form const &src);
		virtual ~Form();

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		Form & operator=(Form const &rhs);
		std::string getName() const;
		int getExecGrade() const;
		int getSignGrade() const;
		bool getSigned() const;

		void	beSigned(Bureaucrat &bureaucrat);

	private:
		const std::string	_name;
		bool				_signed;
		int					_execGrade;
		int					_signGrade;

};

std::ostream & operator<<(std::ostream & o, const Form &rhs);

#endif
