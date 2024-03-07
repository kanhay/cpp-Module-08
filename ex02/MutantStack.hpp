/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:24:32 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/07 21:00:53 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
template <typename T>
class MutantStack : public std::stack<T>{//When you inherit from std::stack<T>, you only need to specify one template argument T. The second template argument, which is the underlying container type (defaulted to std::deque<T>), is not needed in the inheritance declaration because it has a default value.
    public:
        MutantStack();
        MutantStack(const MutantStack& ob);
        MutantStack& operator=(MutantStack &ob);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator   iterator;
        typedef typename std::stack<T>::container_type::const_iterator        const_iterator;
    
        iterator begin(){
            return(this->c.begin());//the c member of a std::stack is a reference to its underlying container. For std::stack with the default underlying container (std::deque), c is a reference to the std::deque container.
            //You can access the c member to directly manipulate the underlying container, which can be useful in some scenarios, such as when you need to iterate over the elements of the container or perform operations that are not directly supported by the std::stack interface.
        }
        
        iterator end(){
            return(this->c.end());
        }

        const_iterator begin() const{
            return(this->c.begin());//the c member of a std::stack is a reference to its underlying container. For std::stack with the default underlying container (std::deque), c is a reference to the std::deque container.
            //You can access the c member to directly manipulate the underlying container, which can be useful in some scenarios, such as when you need to iterate over the elements of the container or perform operations that are not directly supported by the std::stack interface.
        }

        const_iterator end() const{
            return(this->c.end());
        }
};

#endif