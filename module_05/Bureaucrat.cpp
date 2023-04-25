/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:41:15 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/25 13:01:44 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Bureaucrat::Bureaucrat(){

// }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	std::cout << "A new Bureaucrat is born, with name = " << this->_name << " and grade = " << this->_grade << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureacrat " << this->_name << "is dead" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int& Bureaucrat::getGrade() const {
	return this->_grade;
}

Bureaucrat::incrementGrade(){

}

Bureaucrat::decrementGrade(){

}
