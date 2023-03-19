/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:18:29 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/19 09:46:56 by mathiapagan      ###   ########.fr       */
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
  std::ofstream output(this->_fileOut.c_str());
  std::string line;
  while (std::getline(input, line)){
    size_t indexS1 = line.find(s1);
    while (indexS1 != std::string::npos)
    {
      line.erase(indexS1, s1.length());
      line.insert(indexS1, s2);
      indexS1 = line.find(s1);
    }
    output << line << std::endl;
  }
  output.close();
  input.close();

}
