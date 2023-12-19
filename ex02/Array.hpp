/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:54:05 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/19 15:44:32 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


template <typename T>
class Array{
     private:
        unsigned int n;
        T *array;
    public:
        Array();
        Array(unsigned int num);
        ~Array();
        Array &operator=(Array &obj);
        T& operator[](unsigned int number) const;
        Array(Array &obj);
        T size();
};
