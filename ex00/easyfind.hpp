/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:01:55 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/09 12:10:22 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>


template <typename T>
int easyfind(T c, int tofind){
    typename T::iterator iterator;
    if(!c.empty())
    {
        iterator = std::find(c.begin(), c.end(), tofind);
        if (iterator != c.end()){
            return (std::distance(c.begin(), iterator));
        }
    }
    throw std::runtime_error("The value you are looking for don't exist in your container.\n");
}

#endif