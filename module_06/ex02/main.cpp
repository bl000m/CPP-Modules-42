/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:25:23 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/02 16:53:36 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>



Base *generate(void){
	int random = rand() % 3;
	if (random == 0)
		return new A;
	else if (random == 1)
		return new B;
	else if (random == 2)
		return new C;
	else
		return (NULL);
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "Class identified starting from pointer: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class identified starting from a pointer: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class identified: starting from a pointer C" << std::endl;
	else
		std::cout << "Class not identified starting from a pointer" << std::endl;

}

void identify(Base& p){
	Base dynamicCastReturn;
	try {
		dynamicCastReturn = dynamic_cast<A&>(p);
		std::cout << "Class identified starting from a reference: A" << std::endl;
	}
	catch (...){
	}
	try {
		dynamicCastReturn = dynamic_cast<B&>(p);
		std::cout << "Class identified starting from a reference: B" << std::endl;
	}
	catch (...){
	}
	try {
		dynamicCastReturn = dynamic_cast<C&>(p);
		std::cout << "Class identified starting from a reference: C" << std::endl;
	}
	catch (...){
	}
}

int	main(void){
	srand(time(NULL));
	try{
		Base *randomGenerate = generate();
		if (randomGenerate == NULL)
			return 1;
		identify(randomGenerate);
		identify(*randomGenerate);
		delete randomGenerate;
	}
	catch (std::bad_alloc & e){
		std::cout << "Something wrong happemed in allocation memory" << e.what() << std::endl;
		return 1;
	}
	return 0;
}
