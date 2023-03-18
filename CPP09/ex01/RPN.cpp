/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:22:04 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/17 23:42:12 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"





void    RPN::executeRPN(std::stack<int> &numbers, char c)
{
    int num1 = numbers.top();
    numbers.pop();
    int num2 = numbers.top();
    numbers.pop();
    if (c == '+')
        numbers.push(num2 + num1);
    else if (c == '-')
        numbers.push(num2 - num1);
    else if (c == '/')
        numbers.push(num2 / num1);
    else if (c == '*')
        numbers.push(num2 * num1);
}


RPN::RPN()
{
    
}
RPN::~RPN()
{
    
}