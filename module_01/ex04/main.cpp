/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:39:23 by mathiapagan       #+#    #+#             */
/*   Updated: 2023/03/16 16:37:28 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.class.hpp"

int main(int argc, char **argv){

  if (argc != 3)
  {
    std::cout << "Wrong number of argument" << std::endl;
    std::cout << "Right arg sequence: file_in_name, occurrence_to_be_replaced, string_to_replace_with" << std::endl;
    return (1);
  }
  Sed replacingMachine(argv[1]);
  std::cout << "MAIN here" << std::endl;
  replacingMachine.action(argv[2], argv[3]);
  return (0);

}
