/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:54:03 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/19 16:11:23 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"

int main()
{
    try{ 
    Array<int> num(10);
    
    std::cout << "THE ARRAY SIZE : "<< num.size() << std::endl;
    for( int i = 0; i < num.size(); i++)
    {
        num[i] = i;
        std::cout << num[i] << std::endl;
    }
        num[10] = 5;
    }
    catch (std::exception& e)
    {
        std::cerr << std::endl << e.what() << std::endl;
    }
}
