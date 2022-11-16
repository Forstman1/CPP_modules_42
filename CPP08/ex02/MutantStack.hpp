/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:30:38 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/09 19:45:43 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <deque>
#include <stack>
#include <iterator>


template <typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container> {
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::reverse_iterator reverse_iterator;
        MutantStack(const MutantStack &other);
        MutantStack& operator=(const MutantStack& rhs);
        MutantStack();
        ~MutantStack();
        iterator begin();
        iterator end();
        reverse_iterator rbegin();
        reverse_iterator rend();
};


template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin()
{
    return (MutantStack<T, Container>::c.begin());
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end()
{
    return (MutantStack<T, Container>::c.end());
}

template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::rbegin()
{
    return (MutantStack<T, Container>::c.rbegin());
}

template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::rend()
{
    return (MutantStack<T, Container>::c.rend());
}



template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
    
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{

}


template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &other) : MutantStack<T, Container>::stack(other)
{
}
template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& rhs)
{
    if (this != &rhs)
        MutantStack<T, Container>::operator=(obj);
    return *this;
}