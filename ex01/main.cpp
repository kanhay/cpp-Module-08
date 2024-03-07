/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:06:14 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/07 21:17:31 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(){
    try{
        Span s(15);
        s.addNumber(3);
        s.addNumber(0);
        s.addNumber(1);
        std::vector<int> range;
        range.push_back(8);
        range.push_back(-9);
        range.push_back(14);
        range.push_back(882);
        s.addRange(range);
        std::cout << "ShortestSpan = : " << s.shortestSpan();
        std::cout << "\nLongestSpan = : " << s.longestSpan();
        s._print();
    }
    catch(std::exception &e){
        std::cout << e.what() << "\n";
    }
}
