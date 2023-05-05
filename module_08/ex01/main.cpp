/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:10:22 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/05 13:27:21 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int main()
{
	{
		std::cout << "\n---- 5 Items ----" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\n---- Ten Thousand Items ----" << std::endl;
		srand(time(NULL));
		Span test(10000);
		std::vector<int> vector(10000);
		for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
			*it = rand() % INT_MAX;
		test.addOneShot(vector.begin(), vector.end());
		std::cout << test << std::endl;
	}
	{
		std::cout << "\n---- Twenty Thousand Items ----" << std::endl;
		srand(time(NULL));
		Span test(20000);
		std::vector<int> vector(20000);
		for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
			*it = rand() % INT_MAX;
		test.addOneShot(vector.begin(), vector.end());
		std::cout << test << std::endl;
	}
	{
		std::cout << "\n---- Copy Item ----" << std::endl;
		Span test(10);
		int myInts[] = { 1, 5, 67, 89, 23, 50, 33, 79, 54, 77 };
		const int size = sizeof(myInts) / sizeof(int);
		std::vector<int> vector(myInts, myInts + size);
		test.addOneShot(vector.begin(), vector.end());
		Span copy1(test);
		Span copy2 = test;
		std::cout << "Copy1" << std::endl;
		std::cout << copy1 << std::endl;
		std::cout << "Copy2" << std::endl;
		std::cout << copy2 << std::endl << std::endl;
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
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n---- Empty ----" << std::endl;
		Span test(5);
		std::cout << test << std::endl;
	}
	return 0;
}

