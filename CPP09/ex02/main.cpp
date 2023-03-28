/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:05:16 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/20 18:40:02 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void    swap(int &first, int &second)
{
    int tmp = first;

    first = second;
    second = tmp;
}


void    parseData(int argc, char **av)
{
    for (int i =1; i < argc; i++)
    {
        std::string input = av[i];
        for (size_t j = 0; j < input.length(); j++)
        {
            if (!isdigit(input[j]))
                throw std::invalid_argument("Error");
        }
    }
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Error\n";
        return 1;
    }
    try {
        
        std::vector<int> save;
        std::vector<int> numbers1;
        std::deque<int> numbers2;
        
        clock_t start, end;

        double time_passed1;
        double time_passed2;
        
        parseData(ac, av);
        
        start = clock();
        sortVect(ac, av, numbers1, save);
        end = clock();
        
        time_passed1 = double(end - start) / CLOCKS_PER_SEC;
        std::cout << std::fixed << std::setprecision(6);


        start = clock();
        sortDeq(ac, av, numbers2);
        end = clock();
        
        time_passed2 = double(end - start) / CLOCKS_PER_SEC;
        std::cout << "Before: ";
        for (std::vector<int>::iterator it = save.begin(); it != save.end(); it++)
        {
            if (it < save.begin()+6)
                std::cout << *it << " ";
            else if (it == save.begin()+6)
                std::cout << "[...]";
            else if (it == save.end()-1)
                std::cout << *it;
        }
        std::cout << std::endl;

        std::cout << "after:  ";
        for (std::vector<int>::iterator it = numbers1.begin(); it != numbers1.end(); it++)
        {
            if (it < numbers1.begin()+6)
                std::cout << *it << " ";
            else if (it == numbers1.begin()+6)
                std::cout << "[...]";
            else if (it == numbers1.end()-1)
                std::cout << *it;
        }
        std::cout << std::endl;
        std::cout << "Time to process a range of " << ac-1 << "  elements with std::vector : "  << time_passed1 << " s" << std::endl;
    
        std::cout << "Time to process a range of " << ac-1 << "  elements with std::deque  : " << time_passed2 << " s" << std::endl;


        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}