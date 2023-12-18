/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:40:57 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/18 20:53:29 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "iter.cpp"
void print(int &i)
{
    std::cout << i << std::endl;
}
int main()
{
    int int_array[] = {1, 2, 3, 4, 5};
    
    iter(int_array, 5, print);
    return (0);
}
