#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <fstream>
#include "AForm.hpp"


class ShrubberyCreationForm : public AForm {

	public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(ShrubberyCreationForm &src);
    ~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;

	private:
    const std::string _target;
    ShrubberyCreationForm();
};

#endif
