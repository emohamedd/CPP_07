/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:42:35 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/19 16:10:15 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    n = 0;
    this->array = new T[0];
}
template <typename T>
Array<T>::Array(unsigned int num)
{
    this->n = num;
    this->array = new T[num];
}
template <typename T>
Array<T>::Array(Array &obj)
{
    this->n = obj.n;
    this->array = new T[obj.n];
    
    for(unsigned int i = 0; i < obj.n; i++)
        this->array[n] = obj.array[obj.n];
    
}   
template <typename T>
Array<T>& Array<T>::operator=(Array &obj)
{
    this->n = obj.n;
    if (this->array)
        delete [] array;
    this->array = new T[obj.n];
    
    for(unsigned int i = 0; i < obj.n; i++)
        this->array[n] = obj.array[obj.n];
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int number) const
{
    if (number >= this->n)
        throw std::invalid_argument("ERR : -> OUT OF RANGE");
    return this->array[number];
}

template <typename T>
Array<T>::~Array()
{
    delete [] array;
}

template <typename T>
T Array<T>::size()
{
    return this->n;
}