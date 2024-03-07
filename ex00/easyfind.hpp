/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:01:55 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/07 20:40:48 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


template <typename T, typename U>
U &easyfind(T array, int tofind){
    typename T::iterator iterator;
    if(!array.empty())
    {
        iterator = std::find(array.begin(), array.end(), tofind);
        if (iterator != array.end())
            return (*iterator);
    }
    throw std::runtime_error("tofind don't exist in array.\n");
}

#endif