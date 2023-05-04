/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:09:04 by mpagani           #+#    #+#             */
/*   Updated: 2023/05/04 12:19:30 by mpagani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {

	public:
		Array(): _array(new T()), _size(0){}
		Array(unsigned int size): _size(size){ this->_array = new T[this->_size]; };
		virtual ~Array(){ delete[] this->_array; }

		Array(const Array &src): _size(src._size){
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++){
				this->_array[i] = src._array[i];
			}
		}
		Array & operator=(const T & rhs){
			if (&rhs != this){
				delete[] this->_array;
				this->_size = rhs._size;
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++){
					this->_array[i] = rhs._array[i];
				}
			}
			return *this;
		}
		T & operator[](unsigned int index) const {
			if (index > this->_size)
				throw std::out_of_range("index out of bounds");
			return this->_array[index];
		}
		unsigned int size() const { return this->_size ;}


	private:
		T *_array;
		unsigned int _size;
};

template <typename T>
std::ostream &operator<<(std::ostream& output, const Array<T>& arr){
	for (unsigned int i = 0; i < arr.size(); i++){
		if (i > 0)
			output << ", ";
		output << arr[i];
	}
	return output;
}

#endif
