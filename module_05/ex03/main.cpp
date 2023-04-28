/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:40:20 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/28 11:11:59 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main() {
	try {
		Bureaucrat bur("pawn", 150);

		// std::cout << "---------------- Shrubbery form ----------------" << std::endl;
		// ShrubberyCreationForm shrub("shrub");
		// bur.executeForm(shrub);
		// bur.signForm(shrub);

		// std::cout << "---------------- Robotomy form ----------------" << std::endl;
		// RobotomyRequestForm robot("robot");
		// bur.signForm(robot);
		// bur.executeForm(robot);
		// bur.executeForm(robot);
		// bur.executeForm(robot);

		// std::cout << "---------------- Presidential form ----------------" << std::endl;
		// PresidentialPardonForm pres("toto");
		// bur.executeForm(pres);
		// bur.signForm(pres);
		// bur.executeForm(pres);

		Intern someRandomIntern;
		AForm* rrf;
    AForm* rrf2;;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf == NULL)
      return (1);
    bur.executeForm(*rrf);
		bur.signForm(*rrf);
    bur.executeForm(*rrf);
    std::cout << "HERE" << std::endl;
    rrf2 = someRandomIntern.makeForm("robotomy request", "Other");
    bur.signForm(*rrf2);
    bur.executeForm(*rrf2);
    delete rrf;
    delete rrf2;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return 0;
}
