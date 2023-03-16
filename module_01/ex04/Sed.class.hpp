/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:14:26 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/16 16:48:00 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_CLASS_HPP
# define SED_CLASS_HPP

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
