/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:53:45 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/09 22:51:13 by mathiapagan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

PMergeMe::PMergeMe(char **values, int numValues) : _sorted(false){
	//verify duplicates
	for (int i = 1; i < numValues; i++){
		_vectorCont.push_back(atoi(values[i]));
	}
	for (int i = 1; i < numValues - 1; i++){
		_dequeCont.push_back(atoi(values[i]));
	}
}

PMergeMe::PMergeMe(){}

PMergeMe::~PMergeMe(){}

PMergeMe::PMergeMe(const PMergeMe &src){
	*this = src;
}

PMergeMe & PMergeMe::operator=(const PMergeMe &rhs){
	if (&rhs != this) {
		_vectorCont = rhs._vectorCont;
		_dequeCont = rhs._dequeCont;
		_sorted = rhs._sorted;
		_timePassedVector = rhs._timePassedVector;
		_timePassedDeque = rhs._timePassedDeque;
    }
	return *this;
}

//time management
std::time_t PMergeMe::trackTime(){
	std::time_t startTime = std::time(0);
	return startTime;
}

double PMergeMe::timePassed(std::time_t startTime){
	double elapsedTime;
	std::time_t endTime = time(0);
	elapsedTime = difftime(endTime, startTime);
	return elapsedTime;
}

// merge insert sort

void PMergeMe::insertionSort(std::vector<int>& container)
{
    for (std::vector<int>::iterator i = container.begin(); i != container.end(); ++i)
    {
        std::vector<int>::iterator j = i;
        while (j != container.begin() && *(j - 1) > *j)
        {
            std::swap(*j, *(j - 1));
            --j;
        }
    }
}

void PMergeMe::merge(std::vector<int>& container, std::vector<int>& left, std::vector<int>& right)
{
    std::vector<int>::iterator i = left.begin();
    std::vector<int>::iterator j = right.begin();
    std::vector<int>::iterator k = container.begin();
    while (i != left.end() || j != right.end())
    {
        if (i == left.end())
            *k++ = *j++;
        else if (j == right.end())
            *k++ = *i++;
        else if (*i < *j)
            *k++ = *i++;
        else
            *k++ = *j++;
    }
}

void PMergeMe::mergeInsertSortVector(std::vector<int> &container){
    const int threshold = 16;
    const int size = container.size();
    if (size < 2)
        return ;
    if (size < threshold)
    {
        insertionSort(container);
        return ;
    }
    std::vector<int>::iterator middle = container.begin() + size / 2;
    std::vector<int> left(container.begin(), middle);
    std::vector<int> right(middle, container.end());
    mergeInsertSortVector(left);
    mergeInsertSortVector(right);
    merge(container, left, right);
    _sorted = true;
}

//sort algo routing
void PMergeMe::sort(){
	std::time_t startTime = trackTime();
	// std::cout << "Vector container size: " << _vectorCont.size() << std::endl;
	mergeInsertSortVector(_vectorCont);
	_timePassedVector = timePassed(startTime);

	startTime = trackTime();
	// mergeInsertSortDeque(_dequeCont);
	_timePassedDeque = timePassed(startTime);
}

bool PMergeMe::getSortedInfo(){
	return _sorted;
}

std::vector<int>& PMergeMe::getVectorCont(){
	return _vectorCont;
}

std::ostream& operator<<(std::ostream& o, PMergeMe & i)
{
	std::vector<int> vectorCont = i.getVectorCont();
    try
    {
		if (i.getSortedInfo() == false){
			o << "Before: ";
			for (size_t count = 0; count < vectorCont.size(); count++){
				o << vectorCont[count] << " ";
				// if (vectorCont[count] != vectorCont.back())
				// 	o << " ";
			}
			// o << std::endl;
		}
		else{
            o << "After: ";
			for (size_t count = 0; count < vectorCont.size(); count++){
				o << vectorCont[count] << " ";
				// if (vectorCont[count] != vectorCont.back())
				// 	o << " ";
			}
			// o << std::endl;
		}

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return o;
}
