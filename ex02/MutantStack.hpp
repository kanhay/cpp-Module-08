/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:24:32 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/09 14:20:57 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T, typename U>
class MutantStack : public std::stack<T, U>{
    public:
        MutantStack(){}
        MutantStack(const MutantStack& ob){
            *this = ob;
        }
        MutantStack& operator=(const MutantStack &ob){
            if (this != ob)
                std::stack<T, U>::operator= (ob);
            return (*this);
        }
        ~MutantStack(){}

        typedef typename U::iterator iterator;
        typedef typename U::const_iterator   const_iterator;
    
        iterator begin(){
            return(this->c.begin());
        }
        
        iterator end(){
            return(this->c.end());
        }

        const_iterator begin() const{
            return(this->c.begin());
        }

        const_iterator end() const{
            return(this->c.end());
        }
};

#endif