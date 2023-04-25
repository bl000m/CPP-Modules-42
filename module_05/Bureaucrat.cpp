/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:41:15 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/25 16:44:50 by mpagani          ###   ########.fr       */
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

	std::cout << "A new Bureaucrat is born, someone called him " << this->_name << " and gacve him grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src){
	if (this != &src)
	{
		this->_name = src.getName();
		this->_grade = src.getGrade();
	}
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureacrat " << this->_name << " is dead" << std::endl;
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
	std::cout << "Copy assignment operator called" << std::endl;
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

