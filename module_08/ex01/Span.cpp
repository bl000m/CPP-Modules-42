/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:10:47 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/04 18:03:41 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::~Span(){}

Span::Span(unsigned int N){
	this->_data.reserve(N);
}

void Span::addNumber(unsigned int num){
	if (this->_data.size() < this->_data.capacity())
		this->_data.push_back(num);
	else
		throw std::out_of_range("you cannot add any other number, since the container is already full !");
}

unsigned int Span::shortestSpan(){
	if (this->_data.size() < 2)
		throw std::runtime_error("Error: there are not enough number in the container to calculate a span");
	unsigned int diff = 0;
	unsigned int minDiff = UINT_MAX;

	std::sort(this->_data.begin(), this->_data.end());
	for (unsigned int i = 1; i < this->_data.size(); i++){
		diff = this->_data[i] - this->_data[i - 1];
		if (diff < minDiff)
			minDiff = diff;
	}
	return minDiff;
}

unsigned int Span::longestSpan(){
	if (this->_data.size() < 2)
		throw std::runtime_error("Error: there are not enough number in the container to calculate a span");
	unsigned int minVal = *std::min_element(this->_data.begin(), this->_data.end());
	unsigned int maxVal = *std::max_element(this->_data.begin(), this->_data.end());
	return maxVal - minVal;
}

void Span:: addOneShot(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	if (static_cast<unsigned int>(this->_data.size() + std::distance(begin, end) > this->_data.capacity()))
		throw std::out_of_range("you cannot add so many numbers without setting a different N container capacity !");
	this->_data.insert(this->_data.end(), begin, end);
}

std::ostream&	operator<<(std::ostream& o, Span& i)
{
	try
	{
		unsigned int longest = i.longestSpan();
		unsigned int shortest = i.shortestSpan();
		o
			<< "longest Span: " << longest << std::endl
			<< "shortest Span: " << shortest;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return o;
}
