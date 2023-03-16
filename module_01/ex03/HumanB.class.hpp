/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:36:10 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/16 12:05:47 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.class.hpp"

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
