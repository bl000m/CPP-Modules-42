/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:40:20 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/27 13:22:07 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

		std::cout << "---------------- Presidential form ----------------" << std::endl;
		PresidentialPardonForm pres("toto");
		bur.executeForm(pres);
		bur.signForm(pres);
		bur.executeForm(pres);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return 0;
}
