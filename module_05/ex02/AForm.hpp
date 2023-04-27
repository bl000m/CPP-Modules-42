/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:57:09 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/27 13:19:16 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;
class AForm {

	public:
		AForm(std::string name, int execGrade, int signGrade);
		AForm(AForm const &src);
		virtual ~AForm();

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		class NotSignedException : public std::exception{
				public:
					virtual const char* what() const throw();
			};

		AForm & operator=(AForm const &rhs);
		std::string getName() const;
		int getExecGrade() const;
		int getSignGrade() const;
		bool getSigned() const;

		void	beSigned(Bureaucrat &bureaucrat);
    	virtual void execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string	_name;
		bool				_signed;
		int					_execGrade;
		int					_signGrade;
		AForm();

};

std::ostream & operator<<(std::ostream & o, const AForm &rhs);

#endif
