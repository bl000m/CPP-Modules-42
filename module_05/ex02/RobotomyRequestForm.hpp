#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm {

	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm &src);
		~RobotomyRequestForm();

			void execute(Bureaucrat const & executor) const;

	private:
		const std::string _target;
		RobotomyRequestForm();
};

#endif
