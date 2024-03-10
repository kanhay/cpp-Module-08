/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:06:14 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/10 13:34:45 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(){
    try{
        Span s(7);
        s.addNumber(3);
        s.addNumber(0);
        s.addNumber(1);
        std::vector<int> range;
        range.push_back(8);
        range.push_back(-9);
        range.push_back(14);
        range.push_back(882);
        s.addRange(range);
        int shortestSpan = s.shortestSpan();
        int longestSpan = s.longestSpan();
        std::cout << "ShortestSpan = : " << shortestSpan;
        std::cout << "\nLongestSpan = : " << longestSpan;
    }
    catch(std::exception &e){
        std::cout << e.what() << "\n";
    }
}
