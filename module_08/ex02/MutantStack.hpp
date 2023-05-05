/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:35:53 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/05 13:34:23 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <deque>
#include <stack>
#include <list>
#include <iostream>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {

	public:

		MutantStack(){}
		MutantStack(const MutantStack &src){
			*this = src;
		}
		~MutantStack(){};
		MutantStack & operator=(const MutantStack &rhs){
			std::stack<T, Container>::operator=(rhs);
			return *this;
		}

		typedef typename Container::const_iterator const_iterator;
		const_iterator begin() const {
			return this->c.begin();
		}
		const_iterator end() const {
			return this->c.end();
		}


	private:

};

#endif
