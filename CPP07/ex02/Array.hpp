/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 04:11:24 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/06 10:30:29 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdexcept>


template <typename T>
class Array {
	private:
		T	*array;
		int	sizeArray;
	public:
		int	size() const;
		T &operator[](int index);
		Array(const Array& other);
		Array&	operator=(const Array& rhs);
		Array();
		Array(unsigned int n);
		~Array();
};

template<typename T>
Array<T>::Array(const Array& other)
{
	if (other.sizeArray == 0)
	{
		sizeArray = 0;
		array = NULL;
		return ;
	}
	this->array = new T[other.sizeArray];
	sizeArray = other.sizeArray;
	int i = 0;
	while (this->sizeArray > i && i < other.sizeArray)
	{
		this->array[i] = other.array[i];
		i++;
	}
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
	int i = 0;
	if (rhs.sizeArray == 0)
	{
		delete [] array;
		sizeArray = 0;
		array = NULL;
		return (*this);
	}
	delete[] this->array;
	this->array = new T[rhs.sizeArray];
	sizeArray = rhs.sizeArray;
	while (i < rhs.sizeArray)
	{
		this->array[i] = rhs.array[i];
		i++;
	}
	return (*this);
}

template<typename T>
Array<T>::Array() {
    array = NULL;
	sizeArray = 0;
}


template<typename T>
Array<T>::Array(unsigned int n) {
    array = new T[n];
	sizeArray = n;
}


template<typename T>
int    Array<T>::size() const
{
    return (sizeArray);
}


template<typename T>
T &Array<T>::operator[](int index)
{
	if (index >= sizeArray || index < 0)
		throw std::out_of_range("Out of bounds");
	return (array[index]);
}

template<typename T>
Array<T>::~Array()
{
	delete[] array;
}
