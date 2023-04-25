/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:56:57 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/25 17:54:08 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form(){

// }

Form::Form(std::string name, int execGrade, int signGrade) :
	_name(name), _signed(false), _execGrade(execGrade), _signGrade(signGrade){

		if (this->_execGrade > 150 || this->_signGrade > 150)
			throw Form::GradeTooHighException();
		else if (this->_execGrade < 1 || this->_signGrade < 1)
			throw Form::GradeTooLowException();

	std::cout << "A new Form is born, someone called him " << this->_name << std::endl;
}

Form::Form(Form const &src){
	if (this != &src)
	{
		this->_name = src.getName();
		this->_signed = src.getSigned();
		this->_execGrade = src.getExecGrade();
		this->_signGrade = src.getSignGrade();
	}
}

Form::~Form(){
	std::cout << "Form " << this->_name << " is dead" << std::endl;
}

/* ------------ Exception class what func ----------------*/

const char* Form::GradeTooHighException::what() const throw(){
	return "Too high grade: grade must be btw 1 and 150";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Too low grade: grade must be btw 1 and 150";
}

/* ------------ operators (=) overload ----------------*/

Form & Form::operator=(Form const &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
		this->_signed = rhs.getSigned();
		this->_execGrade = rhs.getExecGrade();
		this->_signGrade = rhs.getSignGrade();
	return *this;
}

/* ------------ Getters ----------------*/

std::string Form::getName() const {
	return this->_name;
}

int Form::getSignGrade() const {
	return this->_signGrade;
}

int Form::getExecGrade() const {
	return this->_execGrade;
}
bool Form::getSigned() const {
	return this->_signed;
}


/* ------------ Custom functions ----------------*/

void	Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() >= this._signGrade)
		this._signed = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::signForm();

/* ------------ Insertion («) operator ----------------*/

std::ostream & operator<<(std::ostream & o, const Form &rhs){
	if (this->signed)
	{
		o << rhs.getName() << " form need a " << rhs.getExecGrade() << "grade to be executed"
		<< "and a " << rhs.getSignGrade() << " grade to be signed. And by the way, it is already signed";
	}
	else
	{
		o << rhs.getName() << " form need a " << rhs.getExecGrade() << "grade to be executed"
		<< "and a " << rhs.getSignGrade() << " grade to be signed. And by the way, it is still to be signed";
	}
	return o;
}


