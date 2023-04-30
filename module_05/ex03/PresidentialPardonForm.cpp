#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
  AForm("PresidentialPardonForm", 5, 25), _target(target) {
    std::cout << "A Presidential Pardon form is stacked on the table." << std::endl;
    std::cout << "As a reminder: it needs grade " << this->getSignGrade() << " to be signed" << std::endl;
    std::cout << "...and grade " << this->getExecGrade() << " to be excuted" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src) :
  AForm(src), _target(src._target){
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
  if (executor.getGrade() > this->getExecGrade())
    throw AForm::GradeTooLowException();
  else if (!this->getSigned())
    throw AForm::NotSignedException();
  std::cout << this->_target << " has been officially et gently forgiven by his majesty Zaphod Beeblebrox" << std::endl;
}
