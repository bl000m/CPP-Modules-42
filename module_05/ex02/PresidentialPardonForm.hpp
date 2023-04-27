#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"


class PresidentialPardonForm : public AForm {

	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(PresidentialPardonForm &src);
		~PresidentialPardonForm();

			void execute(Bureaucrat const & executor) const;

	private:
		const std::string _target;
		PresidentialPardonForm();
};

#endif
