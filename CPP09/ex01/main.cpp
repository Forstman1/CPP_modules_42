/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:21:43 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/20 16:59:38 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error\n";
        return 1;
    }
    
    std::stack<int> numbers;
    std::string input = av[1];

    for (size_t i = 0; i <input.length(); i++)
    {
       if (isdigit(input[i]))
            numbers.push(input[i]-48);
        else if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*')
        {
            if (numbers.size() < 2)
            {
                std::cout << "Error\n";
                return 1;
            }
            executeRPN(numbers, input[i]);
        }
        else if (input[i] != ' ')
        {
            std::cout << "Error\n";
            return 1;
        }
    }
    if (numbers.size() != 1)
        std::cout << "Error\n";
    else
        std::cout << numbers.top() << std::endl;
    
}