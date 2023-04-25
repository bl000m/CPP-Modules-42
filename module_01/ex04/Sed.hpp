/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:14:26 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/04/07 13:34:50 by mpagani          ###   ########.fr       */
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
