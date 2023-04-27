/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:28:33 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/27 15:12:28 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
}

Intern::Intern(Intern const &src){
	if (this != &src)
		*this = src;
}

Intern::~Intern(){
}

/* ------------ operators (=) overload ----------------*/

Intern & Intern::operator=(Intern const &rhs){
	(void)rhs;
	return *this;
}

/* ------------ operators (=) overload ----------------*/

AForm *makeForm(std::string name, std::string target){
	AForm 	*form;
	int		index;

	index = 0;
	std::string formOptions[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (int i = 0; i < 3; i++){
		if (formOptions[i] == name){
			index = i;
			break ;
		}
	}
	switch (index){
		case 0:
			form = new PresidentialPardonForm(target);
			break ;
		case 1:
			form = new RobotomyRequestForm(target);
			break ;
		case 2:
			form = new ShrubberyCreationForm(target);
			break ;
		default:
			form = NULL;
			std::cout << "not valid name" << std::endl;
			break ;

	}
	if (form != NULL)
		std::cout << "Intern creates " << name << std::endl;
	return form;
}
