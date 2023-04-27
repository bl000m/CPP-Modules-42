/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:21:04 by mpagani           #+#    #+#             */
/*   Updated: 2023/04/27 15:06:54 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;
class Intern {

	public:
		Intern();
		Intern(Intern const &src);
		virtual ~Intern();

		Intern & operator=(Intern const &rhs);

    AForm *makeForm(std::string name, std::string target);

	private:

};

#endif
