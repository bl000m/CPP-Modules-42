/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:25:23 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/03 12:06:14 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <inttypes.h>

int	main(void){
	Data data;

	data.name = "Luigi";
	data.age = 30;

	std::cout << "--------- Displaying data members before serializing + deserializing " << std::endl;
	std::cout << "Name: " << data.name << "- Age: " << data.age << std::endl;
	uintptr_t ptr = Serializer::serialize(&data);
	Data *dataDeserialized = Serializer::deserialize(ptr);
	std::cout << "--------- Displaying data members after serializing + deserializing " << std::endl;
	std::cout << "Name: " << dataDeserialized->name << "- Age: " << dataDeserialized->age << std::endl;
	return 0;
}
