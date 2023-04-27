/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:40:20 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/26 16:07:29 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

int main() {
	try {
		Bureaucrat bur("pawn", 150);

		std::cout << "---------------- Shrubbery form ----------------" << std::endl;
		ShrubberyCreationForm shrub("shrub");
		bur.executeForm(shrub);
		bur.signForm(shrub);

		// std::cout << "---------------- Robotomy form ----------------" << std::endl;
		// RobotomyRequestForm robot("robot");
		// bur.executeForm(robot);
		// bur.signForm(robot);
		// bur.executeForm(robot);
		// bur.executeForm(robot);

		// std::cout << "---------------- Presidential form ----------------" << std::endl;
		// PresidentialPardonForm pres("toto");
		// bur.executeForm(pres);
		// bur.signForm(pres);
		// bur.executeForm(pres);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return 0;
}
