/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:14:26 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/19 09:46:28 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

class Sed{

  public:

    Sed(std::string filename);
    ~Sed();
    void  action(std::string s1, std::string s2);

  private:

    std::string _fileIn;
    std::string _fileOut;

};

#endif
