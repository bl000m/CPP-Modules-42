/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:36:10 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/19 09:51:26 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

  public:
    HumanB(std::string name);
    ~HumanB();
    void  attack();
    void  setWeapon(Weapon& weapon);

  private:
    std::string _name;
    Weapon* _weapon;

};

#endif
