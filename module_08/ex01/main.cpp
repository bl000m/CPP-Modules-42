/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:10:22 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/04 18:07:12 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int main()
{
	{
		std::cout << "\n---- Ten Thousand Elements ----" << std::endl;
		srand(time(NULL));
		Span test(10000);
		std::vector<int> vector(10000);
		for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
			*it = rand() % INT_MAX;
		test.addOneShot(vector.begin(), vector.end());
		std::cout << test << std::endl; //random
	}
	{
		std::cout << "\n---- Twenty Thousand Elements ----" << std::endl;
		srand(time(NULL));
		Span test(20000);
		std::vector<int> vector(20000);
		for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
			*it = rand() % INT_MAX;
		test.addOneShot(vector.begin(), vector.end());
		std::cout << test << std::endl; //random
	}
	{
		std::cout << "\n---- Copy Element ----" << std::endl;
		Span test(10);
		int myInts[] = { 1, 5, 67, 89, 23, 50, 33, 79, 54, 77 };
		std::vector<int> vector(myInts, myInts + sizeof(myInts) / sizeof(int));
		test.addOneShot(vector.begin(), vector.end());
		Span copy1(test);
		Span copy2 = test;
		std::cout << "Copy1" << std::endl;
		std::cout << copy1 << std::endl; //longest: 88 shortest: 2
		std::cout << "Copy2" << std::endl;
		std::cout << copy2 << std::endl << std::endl; //longest: 88 shortest: 2
	}
	{
		std::cout << "\n---- Full ----" << std::endl;
		Span test(5);
		std::vector<int> vector(6, 42);
		try
		{
			test.addOneShot(vector.begin(), vector.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl; //exception is full
		}
	}
	{
		std::cout << "\n---- Empty ----" << std::endl;
		Span test(5);
		std::cout << test << std::endl; //exception not found
	}
	// Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	return 0;
}

