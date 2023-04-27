/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:56:57 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/27 13:18:32 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(){
}

AForm::AForm(std::string name, int execGrade, int signGrade) :
	_name(name), _signed(false), _execGrade(execGrade), _signGrade(signGrade){

		if (this->_execGrade > 150 || this->_signGrade > 150)
			throw AForm::GradeTooHighException();
		else if (this->_execGrade < 1 || this->_signGrade < 1)
			throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src):
  _name(src._name), _signed(src._signed),
  _execGrade(src._execGrade), _signGrade(src._signGrade)
{
}

AForm::~AForm(){
}

/* ------------ Exception class what func ----------------*/

const char* AForm::GradeTooHighException::what() const throw(){
	return "too high grade";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "too low grade";
}

const char* AForm::NotSignedException::what() const throw(){
	return "The file has not been signed yet. So it can't be executed. Sign it first fellow !";
}

/* ------------ operators (=) overload ----------------*/

AForm & AForm::operator=(AForm const &rhs){
		if (this != &rhs)
      this->_signed = rhs.getSigned();
		  // no other attributes assigned
      // as constant not changeable
	return *this;
}

/* ------------ Getters ----------------*/

std::string AForm::getName() const {
	return this->_name;
}

int AForm::getSignGrade() const {
	return this->_signGrade;
}

int AForm::getExecGrade() const {
	return this->_execGrade;
}
bool AForm::getSigned() const {
	return this->_signed;
}


/* ------------ Custom functions ----------------*/

void	AForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() >= this->_signGrade)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

/* ------------ Insertion («) operator ----------------*/

std::ostream & operator<<(std::ostream & o, const AForm &rhs){
	if (rhs.getSigned() == true)
	{
		o << rhs.getName() << " AForm need a " << rhs.getExecGrade() << "grade to be executed"
		<< "and a " << rhs.getSignGrade() << " grade to be signed. And by the way, it is already signed";
	}
	else
	{
		o << rhs.getName() << " AForm need a " << rhs.getExecGrade() << "grade to be executed"
		<< "and a " << rhs.getSignGrade() << " grade to be signed. And by the way, it is still to be signed";
	}
	return o;
}
