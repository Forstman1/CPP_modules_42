/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:05:16 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/18 16:55:42 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


void    swap(int &first, int &second)
{
    int tmp = first;

    first = second;
    second = tmp;
}


void    insertAlgo(std::vector<int> &Array)
{
    int j = 0;
    for (int i = 0; i < Array.size(); i++)
    {
        j = i;
        while (j > 0 && Array[j-1] > Array[j])
        {
            swap(Array[j], Array[j-1]);
            j--;
        }
    }
}


std::vector<int> merge(std::vector<int> Array1, std::vector<int> Array2)
{
    std::vector<int> Array3;

    while (!Array1.empty() && !Array2.empty())
    {
        if (Array1[0] > Array2[0])
        {
            Array3.push_back(Array2[0]);
            Array2.erase(Array2.begin());
        }
        else
        {
            Array3.push_back(Array1[0]);
            Array1.erase(Array1.begin());
        }
    }
    while (!Array1.empty())
    {
        Array3.push_back(Array1[0]);
        Array1.erase(Array1.begin());
    }
    while (!Array2.empty())
    {
        Array3.push_back(Array2[0]);
        Array2.erase(Array2.begin());
    }
    return Array3;
}



std::vector<int> merge_sort1(std::vector<int>& arr) {
    
    if (arr.size() - 1 <= 15) {
        insertAlgo(arr);
        return arr;
    } else {

        std::vector<int> Array1;
        std::vector<int> Array2;
    
        for (int i = 0 ; i < arr.size()/2; i++)
            Array1.push_back(arr[i]);
        for (int i = arr.size()/2 ; i < arr.size(); i++)
            Array2.push_back(arr[i]);
            
        Array1 = merge_sort1(Array1);
        Array2 = merge_sort1(Array2);

        return (merge(Array1, Array2));
    }
}



int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Error\n";
        return 1;
    }
    
    std::vector<int> numbers;
    std::cout << "Before: ";
    for (int i =1; i < ac; i++)
    {
        std::string input = av[i];
        numbers.push_back(atoi(input.c_str()));
        std::cout << input << " ";
    }
    std::cout << std::endl;
    numbers = merge_sort1(numbers);
    std::cout << "After:  ";

    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}