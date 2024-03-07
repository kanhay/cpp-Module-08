/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:01:59 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/07 20:41:44 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    try{
        std::vector<int> v(5);
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        
        int tofind = -2;
        std::cout << easyfind<std::vector<int>, int>(v, tofind)<< " exist in the container.\n";
    }
    catch(std::exception &e){
        std:: cout << e.what();
    }
}