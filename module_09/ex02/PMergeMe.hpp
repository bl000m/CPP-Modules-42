/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathiapagani <mathiapagani@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:53:41 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/09 22:23:50 by mathiapagan      ###   ########.fr       */
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
#include <ctime>

class PMergeMe {

	public:
		PMergeMe(char **values, int numValues);
		PMergeMe(const PMergeMe &src);
		virtual ~PMergeMe();

		//sort algo
		void sort();
		void mergeInsertSortVector(std::vector<int> &container);
		void mergeSortVector(std::vector<std::vector<int> > &container, int left, int right);
    void insertionSort(std::vector<int>& arr);
    void merge(std::vector<int>& arr, std::vector<int>& left, std::vector<int>& right);

		//time management
		std::time_t trackTime();
		double timePassed(std::time_t startTime);

		//getter
		bool getSortedInfo();
		std::vector<int>& getVectorCont();

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
