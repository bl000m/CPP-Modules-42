/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:39:23 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/19 09:46:56 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv){

  if (argc != 4)
  {
    std::cout << "Wrong number of argument" << std::endl;
    std::cout << "Right arg sequence: file_in_name, occurrence_to_be_replaced, string_to_replace_with" << std::endl;
    return (1);
  }
  Sed replacingMachine(argv[1]);
  replacingMachine.action(argv[2], argv[3]);
  return (0);

}
