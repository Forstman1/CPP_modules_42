/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:45:22 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/09 19:28:16 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <stdexcept>
#include <iostream>

Span::Span(unsigned int i)
{
    sizeSpan = i;
}

Span::Span()
{
    sizeSpan = 0;
}

void	Span::addNumber(int number)
{
    try {
        if (span.size() < static_cast<size_t>(sizeSpan))
            span.push_back(number);
        else
            throw std::out_of_range("out of bounds");
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int		Span::shortestSpan(void)
{   
    if (sizeSpan < 2 || span.size() < 2)
        throw std::out_of_range("small array");
    std::vector<int> v1;
    std::vector<int> result;
    v1 = span;
    std::sort(v1.begin(), v1.end());
    for (std::vector<int>::iterator it = span.begin(); it != span.end(); it++)
    {
        int value = *it - *(it + 1);
        if (value < 0)
            value *= -1;
        result.push_back(value);
    }
    int min = *std::min_element(result.begin(), result.end());
    return (min);
}

int		Span::longestSpan(void)
{
    if (sizeSpan < 2 || span.size() < 2)
        throw std::out_of_range("small array");
    int max = *std::max_element(span.begin(), span.end()) - *std::min_element(span.begin(), span.end());
    return (max); 
}

void	Span::addNubElements(unsigned int n)
{
    try {
        if (static_cast<size_t>(sizeSpan) - span.size() >= n)
        {
            srand(time(NULL));
            for (size_t i = 0; i < n; i++)
                span.push_back(rand() % 20);
        }
        else
            throw std::out_of_range("not enough space array");
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    Span::printall(void)
{
    for (std::vector<int>::iterator it = span.begin(); it != span.end(); it++)
        std::cout << *it << std::endl;
}

Span::Span(const Span &other)
{
    *this = other;
}

Span& Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        this->sizeSpan = rhs.sizeSpan;
        this->span = rhs.span;
    }
    return *this;
}


Span::~Span()
{

}

