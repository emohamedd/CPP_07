/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:54:05 by emohamed          #+#    #+#             */
/*   Updated: 2023/12/19 14:48:56 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array{
    public:
        Array();
        Array(unsigned int n);
        Array(Array &obj);
        ~Array();
        Array &operator=(Array &obj);
        T size();
}
