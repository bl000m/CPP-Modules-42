/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:21:04 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/25 17:46:05 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Bureaucrat {

	public:
		// Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		virtual ~Bureaucrat();

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		Bureaucrat & operator=(Bureaucrat const &rhs);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form);

	private:
		std::string	_name;
		int			_grade;

};

std::ostream & operator<<(std::ostream & o, const Bureaucrat &rhs);

#endif
