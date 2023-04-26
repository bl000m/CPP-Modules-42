/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:41:15 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/26 16:11:27 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Bureaucrat::Bureaucrat(){

// }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){

		if (this->_grade > 150)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade < 1)
			throw Bureaucrat::GradeTooLowException();

}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
	if (this != &src)
	{
		this->_name = src.getName();
		this->_grade = src.getGrade();
	}
}

Bureaucrat::~Bureaucrat(){
}

/* ------------ Exception class what func ----------------*/

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "too high grade";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "too low grade";
}

/* ------------ operators (=) overload ----------------*/

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs){
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return *this;
}

/* ------------ Getters ----------------*/

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

/* ------------ Insertion («) operator ----------------*/

std::ostream & operator<<(std::ostream & o, const Bureaucrat &rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}


void Bureaucrat::incrementGrade(){
	if (this->_grade > 1)
		this->_grade -= 1;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(){
	if (this->_grade < 149)
		this->_grade += 1;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form){
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e){
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because: " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) const {
  try {
		form.execute(*this);
		std::cout << this->getName() << " execute " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e){
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because: " << e.what() << std::endl;
	}
}
