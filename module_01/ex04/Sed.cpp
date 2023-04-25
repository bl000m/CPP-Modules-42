/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:18:29 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/04/07 13:28:20 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename) : _fileIn(filename){

  std::ifstream input(this->_fileIn.c_str());
  if (input.is_open())
    this->_fileOut = this->_fileIn + ".replace";
  std::cout << "constructor called with fileIn: " << this->_fileIn << " and fileout set: " << this->_fileOut << std::endl;
  input.close();

}

Sed::~Sed(){
  std::cout << "distructor called" << std::endl;
}

void  Sed::action(std::string s1, std::string s2){

  std::ifstream input(this->_fileIn.c_str());
  if (input.is_open()) {
    std::string line;
    if (std::getline(input, line)){
      std::ofstream output(this->_fileOut.c_str());
      size_t indexS1 = line.find(s1);
      while (indexS1 != std::string::npos)
      {
        line.erase(indexS1, s1.length());
        line.insert(indexS1, s2);
        indexS1 = line.find(s1);
      }
      output << line << std::endl;
      output.close();
    }
    else {
      std::cerr << "There's nothing in the file for replacingMachine to work on" << std::endl;
    }
    input.close();
  }
  else {
    std::cerr << "The file can't be open" << std::endl;
  }

}
