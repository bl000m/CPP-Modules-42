/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:18:29 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/16 16:37:44 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.class.hpp"

Sed::Sed(std::string fileIn) : _fileIn(fileIn){
  this->_fileOut = this->_fileIn + ".replace";
  std::cout << "constructor called and fileout set" << std::endl;
}

Sed::~Sed(){
  std::cout << "distructor called" << std::endl;
}

void  Sed::action(std::string s1, std::string s2){
  std::cout << "ACTION here" << std::endl;
  std::ifstream input(this->_fileIn);
  std::ofstream output(this->_fileOut);
  if (input.is_open())
  {
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
  else
    return ;
}
