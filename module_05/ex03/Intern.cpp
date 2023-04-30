/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:28:33 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/30 17:27:43 by mathia           ###   ########.fr       */
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

/* ------------ make Form ----------------*/

AForm *makeShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *makeRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *makePresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string &name, const std::string &target){
	std::string formOptions[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	funcPtr		forms[3] = {&makePresidentialPardonForm, &makeRobotomyRequestForm, &makeShrubberyCreationForm};
	for (int i = 0; i < 3; i++){
		if (name == formOptions[i]){
			std::cout << "The " << name << " has been created by a useless intern" << std::endl;
			return (forms[i](target));
		}
	}
	std::cout << "Intern can't create '" << name << "' because it's not a valid name come on !" << std::endl;
	return NULL;
}
