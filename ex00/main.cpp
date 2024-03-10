/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:01:59 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/09 12:08:32 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    try{
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(-3);
        v.push_back(4);
        v.push_back(5);
        
        int tofind = -5;
        int index = easyfind<std::vector<int> >(v, tofind);
        std::cout << tofind << " exist in the container at the index " << index << "\n";
    }
    catch(std::exception &e){
        std:: cout << e.what();
    }
}