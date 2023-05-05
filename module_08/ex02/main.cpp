/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:36:12 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/05 13:35:30 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(){
	{
		std::cout << "---- USING INSTANCE OF A OUR MUTANSTANK AS A CONTAINER ----" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "\nprinting the first element:" << std::endl;
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "\nprinting the size of the container after removing the first element:" << std::endl;
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "\niterating on the container after adding 4 elements:" << std::endl;
		while (it != ite)
		{
			if (it != mstack.begin() && it != mstack.end())
				std::cout << ", ";
			std::cout << *it;
			++it;
		}
		std::cout << std::endl;
		std::stack<int> s(mstack);
	}
	{
		std::cout << "\n\n---- USING INSTANCE OF A LIST CLASS TEMPLATE AS A CONTAINER ----" << std::endl;
		std::list<int> mlist;
		mlist.push_front(5);
		mlist.push_front(17);
		std::cout << "\nprinting the first element:" << std::endl;
		std::cout << mlist.front() << std::endl;
		mlist.pop_front();
		std::cout << "\nprinting the size of the container after removing the first element:" << std::endl;
		std::cout << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);
		std::list<int>::const_iterator it = mlist.begin();
		std::list<int>::const_iterator ite = mlist.end();
		++it;
		--it;
		std::cout << "\niterating on the container after adding 4 elements:" << std::endl;
		while (it != ite)
		{
			if (it != mlist.begin() && it != mlist.end())
				std::cout << ", ";
			std::cout << *it;
			++it;
		}
		std::cout << std::endl;
		std::list<int> s(mlist);
		return 0;
	}
}
