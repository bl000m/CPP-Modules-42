#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
  AForm("ShrubberyForm", 137, 145), _target(target) {
    std::cout << "A shrubbery form is stacked on the table." << std::endl;
    std::cout << "As a reminder: it needs grade " << this->getSignGrade() << " to be signed" << std::endl;
    std::cout << "...and grade " << this->getExecGrade() << " to be excuted" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src) :
  AForm(src), _target(src._target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
  if (executor.getGrade() > this->getExecGrade())
    throw AForm::GradeTooLowException();
  else if (!this->getSigned())
    throw AForm::NotSignedException();
  std::string file_name = this->_target + "_shrubbery";
  std::ofstream file(file_name.c_str());
  if (!file.is_open()){
    std::perror(file_name.c_str());
    return ;
  }
  file << "     ccee88oo" << std::endl;
  file << "  C8O8O8Q8PoOb o8oo" << std::endl;
  file << " dOB69QO8PdUOpugoO9bD" << std::endl;
  file << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
  file << "    6OuU  /p u gcoUodpP" << std::endl;
  file << "      /////  /douUP" << std::endl;
  file << "        ///////" << std::endl;
  file << "         |||//" << std::endl;
  file << "         |||//" << std::endl;
  file << "         |||||" << std::endl;
  file << "   .....//||||/...." << std::endl;
  file.close();
}
