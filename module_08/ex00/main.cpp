/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:35:08 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/05 13:58:21 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int main() {
    std::list<int> intList;
    intList.push_back(1);
    intList.push_back(2);
    intList.push_back(3);

    try {
		std::list<int>::const_iterator it = easyfind(intList, 1);
        std::cout << "yes ! number '" << *it << "' is in the list !" << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
