/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:53:41 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/10 12:38:58 by mpagani          ###   ########.fr       */
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

		//sort algo
		void sort();
		void mergeInsertSortVector(std::vector<int> &container);
		void mergeInsertSortDeque(std::deque<int> &container);
		void mergeSortVector(std::vector<std::vector<int> > &container, int left, int right);
    	void insertionSortVector(std::vector<int>& arr);
    	void insertionSortDeque(std::deque<int>& arr);
    	void mergeVector(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right);
    	void mergeDeque(std::deque<int>& arr, std::deque<int>& left, std::deque<int>& right);

		//time management
		double trackTime();
		double timePassed(double startTime);
		void printTimeElapsed();

		//getters
		bool getSortedInfo();
		std::vector<int>& getVectorCont();
		std::deque<int>& getDequeCont();

		//<< overload
		PMergeMe & operator=(const PMergeMe &rhs);

	private:
		PMergeMe();
		std::vector<int> _vectorCont;
		std::deque<int> _dequeCont;
		bool	_sorted;
		double	_timePassedVector;
		double	_timePassedDeque;

	protected:
		class SomethingWrong : public std::exception {
			public:
				SomethingWrong(const char *msg) : message(msg) {}
				virtual const char*what() const throw(){
					return message.c_str();
				}
				virtual ~SomethingWrong() throw() {}
			private:
				std::string message;
		};
};

std::ostream&	operator<<(std::ostream& o, PMergeMe& i);

#endif
