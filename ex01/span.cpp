/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:06:36 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/09 13:17:45 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span():max_n(0){
}

Span::Span(unsigned int N):max_n(N){
}

Span::Span(const Span &ob){
    *this = ob;
}

Span& Span::operator=(const Span &ob){
    if (this != &ob){
        max_n = ob.max_n;
        for (unsigned int i = 0; i < ob.v.size(); i++)
            this->v.push_back(ob.v[i]);
    }
    return *this;
}

Span::~Span(){
}

unsigned int Span::getSize()const{
    return(v.size());
}

void Span::_print() const{
    if (!v.empty()){
        std::vector<int>::const_iterator it;
        std::vector<int>::const_iterator ite = v.end();
        for (it = v.begin(); it != ite; it++)
            std::cout << "\n" << *it;
    }
}

void Span::addNumber(int nb){
    if (v.size() < max_n){
        v.push_back(nb);
    }
    else
        throw std::runtime_error("\nException: Span is full");
}

int Span::shortestSpan(){
    int min;
    if (!v.empty() && v.size() >= 2){
        std::vector<int> vec(v.size());
        vec = v;
        std::sort(vec.begin(), vec.end());
        min = vec.at(1) - vec.at(0);
        for (unsigned long i = 0; i < vec.size(); i++){
            if ((i + 1) < vec.size() && (vec.at(i + 1) - vec.at(i)) < min)
                min = v.at(i + 1) - v.at(i);
        }
    }
    else
        throw std::runtime_error("\nException: Span is empty or its elements are insufficients");
    return (min);
}

int Span::longestSpan(){
    if (!v.empty() && v.size() >= 2){
        std::vector<int> vec(v.size());
        vec = v;
        std::sort(vec.begin(), vec.end()); 
        return (vec.back() - vec.front());
    }
    else
        throw std::runtime_error("\nException: Span is empty or its elements are insufficients");
}

void Span::addRange(std::vector<int> &vec){
    if(!vec.empty()){
        for (unsigned long i = 0; i < vec.size(); i++)
            addNumber(vec.at(i));
    }
}
