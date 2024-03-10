/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:24:46 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/10 13:06:28 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    try{
        MutantStack<int, std::deque<int> > mstack;
        mstack.push(5);
        mstack.push(17);
        if (!mstack.empty()){
            std::cout << mstack.top() << std::endl;
            mstack.pop();
        }
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        if (!mstack.empty()){
            MutantStack<int, std::deque<int> >::iterator it = mstack.begin();
            MutantStack<int, std::deque<int> >::iterator ite = mstack.end();
            ++it;
            --it;
            while (it != ite){
                std::cout << *it << std::endl;
                ++it;
            }
        }
        std::stack<int> s(mstack);
    }
    catch(std::exception &e){
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
