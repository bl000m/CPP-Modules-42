/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:56:57 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/30 11:41:13 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(){
}

Form::Form(std::string name, int execGrade, int signGrade) :
	_name(name), _signed(false), _execGrade(execGrade), _signGrade(signGrade){

		if (this->_execGrade > 150 || this->_signGrade > 150)
			throw Form::GradeTooHighException();
		else if (this->_execGrade < 1 || this->_signGrade < 1)
			throw Form::GradeTooLowException();
}

Form::Form(Form const &src):
  _name(src._name), _signed(src._signed),
  _execGrade(src._execGrade), _signGrade(src._signGrade){
}

Form::~Form(){
}

/* ------------ Exception class what func ----------------*/

const char* Form::GradeTooHighException::what() const throw(){
	return "too high grade";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "too low grade";
}

/* ------------ operators (=) overload ----------------*/

/* no other attributes assigned as constant not changeable */
Form & Form::operator=(Form const &rhs){
		if (this != &rhs)
      this->_signed = rhs.getSigned();
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
	if (bureaucrat.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

/* ------------ Insertion («) operator ----------------*/

std::ostream & operator<<(std::ostream & o, const Form &rhs){
  o << "Form '" << rhs.getName() << "' need:" << std::endl;
  o << "- grade " << rhs.getSignGrade() << " to be signed " << std::endl;
  o << "- grade " << rhs.getExecGrade() << " to be executed " << std::endl;
	if (rhs.getSigned() == true)
    o << "And by the way, it is already signed" << std::endl;
  else
    o << "And by the way, it is still to be signed" << std::endl;
	return o;
}
