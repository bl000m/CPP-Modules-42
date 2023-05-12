/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathia <mathia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:53:41 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/11 10:55:44 by mathia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <stdexcept>
#include <deque>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <sys/time.h>

class PMergeMe {

	public:
		PMergeMe(char **values, int numValues);
		PMergeMe(const PMergeMe &src);
		virtual ~PMergeMe();

		//operator = overload
		PMergeMe & operator=(const PMergeMe &rhs);
		
		//sort algo
		void sort();
		void mergeInsertSortVector(std::vector<int> &container);
		void mergeInsertSortDeque(std::deque<int> &container);
    	void insertionSortVector(std::vector<int>& arr);
    	void insertionSortDeque(std::deque<int>& arr);
    	void mergeVector(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right);
    	void mergeDeque(std::deque<int>& arr, std::deque<int>& left, std::deque<int>& right);

		//time management
		double trackTime();
		double timePassed(const double startTime);
		void printTimeElapsed();

		//getters
		bool getSortedInfo() const;
		const std::vector<int>& getVectorCont() const;

	private:
		PMergeMe();
		std::vector<int> _vectorCont;
		std::deque<int> _dequeCont;
		bool	_sorted;
		double	_timePassedVector;
		double	_timePassedDeque;

};

std::ostream&	operator<<(std::ostream& o, const PMergeMe& i);

#endif
