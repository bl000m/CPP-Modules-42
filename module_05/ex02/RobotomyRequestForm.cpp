#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
  AForm("RobotomyForm", 45, 72), _target(target) {
    std::cout << "A robotomy form is stacked on the table." << std::endl;
    std::cout << "As a reminder: it needs grade " << this->getSignGrade() << " to be signed" << std::endl;
    std::cout << "...and grade " << this->getExecGrade() << " to be excuted" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src) :
  AForm(src), _target(src._target){
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

  static int rand;

  if (executor.getGrade() > this->getExecGrade())
    throw AForm::GradeTooLowException();
  else if (!this->getSigned())
    throw AForm::NotSignedException();
  if (rand % 2 == 0){
    std::cout << "trrrrrrrrr trrrrrrrrr trrrrrrrrrrr" << std::endl;
    std::cout << this->_target << " has been robotized" << std::endl;
  }
  else
	  std::cout << "Fail: " << this->_target<< " has not been robotized 'cause destiny do it half the times" << std::endl;
  rand++;
}
