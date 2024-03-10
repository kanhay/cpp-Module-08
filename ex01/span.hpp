/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:06:24 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/08 17:28:55 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
    private:
        unsigned int max_n;
        std::vector<int> v;
        Span();
    public:
        Span(unsigned int N);
        Span(const Span &ob);
        Span& operator=(const Span &ob);
        ~Span();
    
    unsigned int getSize()const;
    void _print() const;
    
    void addNumber(int nb);
    int shortestSpan();
    int longestSpan();
    void addRange(std::vector<int> &vec);
};

#endif