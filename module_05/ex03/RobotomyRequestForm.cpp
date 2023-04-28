#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
  AForm("RobotomyForm", 45, 72), _target(target) {
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src) :
  AForm(src), _target(src._target){
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
  static int rand;

  if (executor.getGrade() < this->getExecGrade())
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
