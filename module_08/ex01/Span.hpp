/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:10:42 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/05 12:52:22 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <list>
#include <iostream>
#include <vector>
#include <climits>

class Span {

	public:
		Span(unsigned int N);
		virtual ~Span();
		void addNumber(unsigned int num);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		void addOneShot(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	private:
		Span();
		std::vector<int> _data;

};

std::ostream&	operator<<(std::ostream& o, const Span& i);

#endif
