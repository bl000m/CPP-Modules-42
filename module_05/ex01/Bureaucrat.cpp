/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:41:15 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/30 11:42:49 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){

		if (this->_grade > 150)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade < 1)
			throw Bureaucrat::GradeTooLowException();
    std::cout << "A bureaucrat named " << this->_name << " makes his entrance into the office, proudly displaying grade " << this->_grade << " on his shirt." << std::endl;
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
	return "Too high grade: grade must be btw 1 and 150";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Too low grade: grade must be btw 1 and 150";
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

void Bureaucrat::signForm(Form &form){
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e){
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because: " << e.what() << std::endl;
	}
}
