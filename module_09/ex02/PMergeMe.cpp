/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:53:45 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/11 10:54:44 by mathia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

PMergeMe::PMergeMe(char **values, int numValues) : _sorted(false) {
    for (int i = 1; i < numValues; i++) {
        int inputToInt = atoi(values[i]);
        _vectorCont.push_back(inputToInt);
        _dequeCont.push_back(inputToInt);
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


/* --------------------- ROUTING SORT ------------------------*/

void PMergeMe::sort(){
	double startTime = trackTime();
	mergeInsertSortVector(_vectorCont);
	_timePassedVector = timePassed(startTime);

	startTime = trackTime();
	mergeInsertSortDeque(_dequeCont);
	_timePassedDeque = timePassed(startTime);
    _sorted = true;
}


/* <<<<<<<<<<<<<<<<<<<<< VECTOR CHOICE ->>>>>>>>>>>>>>>>>>>>>>>> */

void PMergeMe::mergeInsertSortVector(std::vector<int> &container){
    const int threshold = 13;
    const int size = container.size();
    if (size < 2)
        return ;
    if (size < threshold)
    {
        insertionSortVector(container);
        return ;
    }
    std::vector<int>::iterator middle = container.begin() + size / 2;
    std::vector<int> left;
    left.reserve(std::distance(container.begin(), middle));
    std::vector<int> right;
    right.reserve(std::distance(middle, container.end()));
    left.assign(container.begin(), middle);
    right.assign(middle, container.end());
    mergeInsertSortVector(left);
    mergeInsertSortVector(right);
    mergeVector(container, left, right);
}

void PMergeMe::insertionSortVector(std::vector<int>& container)
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

void PMergeMe::mergeVector(std::vector<int>& container, std::vector<int>& left, std::vector<int>& right)
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


/* <<<<<<<<<<<<<<<<<<<<< DEQUE CHOICE ->>>>>>>>>>>>>>>>>>>>>>>> */

void PMergeMe::mergeInsertSortDeque(std::deque<int> &container){
    const int threshold = 13;
    const int size = container.size();
    if (size < 2)
        return ;
    if (size < threshold)
    {
        insertionSortDeque(container);
        return ;
    }
    std::deque<int>::iterator middle = container.begin() + size / 2;
    std::deque<int> left(container.begin(), middle);
    std::deque<int> right(middle, container.end());
    mergeInsertSortDeque(left);
    mergeInsertSortDeque(right);
    mergeDeque(container, left, right);
}

void PMergeMe::insertionSortDeque(std::deque<int>& container)
{
    for (std::deque<int>::iterator i = container.begin(); i != container.end(); ++i)
    {
        std::deque<int>::iterator j = i;
        while (j != container.begin() && *(j - 1) > *j)
        {
            std::swap(*j, *(j - 1));
            --j;
        }
    }
}

void PMergeMe::mergeDeque(std::deque<int>& container, std::deque<int>& left, std::deque<int>& right)
{
    std::deque<int>::iterator i = left.begin();
    std::deque<int>::iterator j = right.begin();
    std::deque<int>::iterator k = container.begin();
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


/* <<<<<<<<<<<<<<<<<<<<< TRASVERSAL TOOLS ->>>>>>>>>>>>>>>>>>>>>>>> */

/* --------------------- time management ------------------------*/

double PMergeMe::trackTime(){
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	return (currentTime.tv_sec * 1000 + currentTime.tv_usec * 0.001);

}

double PMergeMe::timePassed(const double startTime){
	double endTime = trackTime();
	if (startTime > 0)
		return endTime - startTime;
	return 0;
}

/* --------------------- getters ------------------------*/

bool PMergeMe::getSortedInfo() const {
	return _sorted;
}

const std::vector<int>& PMergeMe::getVectorCont() const {
	return _vectorCont;
}

/* --------------------- printing ------------------------*/

void PMergeMe::printTimeElapsed(){
	std::cout << "\e[0;33m" << "Time to process a range of " << _vectorCont.size() << " elements with std::vector : " << _timePassedVector <<  " us" << "\e[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\e[0;32m" << "Time to process a range of " << _dequeCont.size() << " elements with std::deque : " << _timePassedDeque <<  " us" << "\e[0m" << std::endl;
	std::cout << std::endl;
}

/* ---------------- << operator overload --------------------*/

std::ostream& operator<<(std::ostream& o, const PMergeMe & i)
{
	std::vector<int> vectorCont = i.getVectorCont();

    try
    {
		if (i.getSortedInfo() == false){
			o << std::endl;
			o << "\e[1;37m" << "Before: " << "\e[0m" << std::endl;
			for (size_t count = 0; count < vectorCont.size(); count++){
				o << "\e[0;31m" << vectorCont[count] << " " << "\e[0m";
			}
			o << std::endl;
		}
		else{
			o << std::endl;
            o << "\e[1;37m" << "After: " << "\e[0m" << std::endl;
			for (size_t count = 0; count < vectorCont.size(); count++){
				o << "\e[0;36m" << vectorCont[count] << " " << "\e[0m";
			}
			o << std::endl;
		}

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return o;
}

