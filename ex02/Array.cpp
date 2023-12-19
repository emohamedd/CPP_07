/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:42:35 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/19 14:53:31 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    T *array = new T[];
}
template <typename T>
Array<T>::Array(unsigned int n)
{
    T *array = new T[n];
}
template <typename T>
Array<T>::Array(Array &obj)
{
    (void)obj;
    return *this;
}
template <typename T>
Array<T>& Array<T>::operator=(Array &obj)
{
    (void)obj;
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete [] array;
}

template <typename T>
T Array<T>::size()
{
    return sizeof(array);
}