/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:53:45 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/09 18:08:54 by mpagani          ###   ########.fr       */
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

//merge sort

void PMergeMe::mergeSortVector(std::vector<std::vector<int> > &container, int left, int right){
	if (left >= right)
		return;
	int middle = ((left + right) / 2);
	
	mergeSortVector(container, left, middle);
	mergeSortVector(container, middle + 1, right);
	std::vector<std::vector<int> > result;
	int i = left;
	int j = middle + 1;
	while (i <= middle && j <= right){
		if (container[i][0] < container[j][0]){
			result.push_back(container[i]);
			i++;
		}
		else if (container[i][0] == container[j][0] && container[i][1] < container[j][1]){
			result.push_back(container[i]);
			i++;
		}
		else{
			result.push_back(container[j]);
			j++;
		}
	}
	while (i <= middle){
		result.push_back(container[i]);
		i++;
	}
	while (j <= right){
		result.push_back(container[j]);
		j++;
	}
	for (int k = left; k <= right; k++){
		container[k] = result[k - left];
	}
}

// merge insert sort

void PMergeMe::mergeInsertSortVector(std::vector<int> &container){
	//devide vector container into subcontainer of length k
	int	minValue = 2; // test with other value
	if ((int)container.size() < minValue)
		return ;
	int j = 0;
	std::vector<std::vector<int> > subContainers(container.size() / minValue + 1); // need to check if result is an int or float
	std::vector<int>::iterator it;
	for (it = container.begin(); it < container.end(); it += minValue){
		for (int i = 0; i < minValue && it + 1 != container.end(); i++){
			// std::cout << "j = " << j << std::endl;
			std::cout << "i = " << i << std::endl;
			subContainers[j].push_back(*(it + i));
			std::cout << "added to subcontainer: " << subContainers[j].back() << std::endl;
		}
		j++;
	}
	//sort each subcontainer using insertion sort
	for (int i = 0; i < (int)subContainers.size(); i++){
		std::vector<int>::iterator subIt;
		for (subIt = subContainers[i].begin(); subIt < subContainers[i].end(); subIt++){
			if (*(subIt + 1) < *subIt){
				int temp = *subIt;
				*subIt = *(subIt + 1);
				*(subIt + 1) = temp;
			}
		}
	}

	//merge the sorted subcontainer using merge sort
	mergeSortVector(subContainers, 0, subContainers.size() - 1);

	//_sorted become true
	_sorted = 1;
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
