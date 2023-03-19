/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 09:49:44 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/19 09:49:58 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

  public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void  attack();

  private:
    std::string _name;
    Weapon& _weapon;

};

#endif
