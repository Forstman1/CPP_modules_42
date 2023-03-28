/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:05:38 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/20 18:34:28 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"



void    sortVect(int ac, char **av, std::vector<int> &numbers1, std::vector<int> &save)
{
    
    for (int i =1; i < ac; i++)
    {
        std::string input = av[i];
        if (atoi(input.c_str()) < 0)
            throw std::invalid_argument("Error");
        numbers1.push_back(atoi(input.c_str()));
    }
    save = numbers1;
    numbers1 = merge_sort(numbers1);
}

void    sortDeq(int ac, char **av, std::deque<int> &numbers2)
{
    for (int i =1; i < ac; i++)
    {
        std::string input = av[i];
        if (atoi(input.c_str()) < 0)
            throw std::invalid_argument("Error");
        numbers2.push_back(atoi(input.c_str()));
    }
    numbers2 = merge_sort(numbers2);
}


void    insertAlgo(std::deque<int> &Array)
{
    int j = 0;
    for (size_t i = 0; i < Array.size(); i++)
    {
        j = i;
        while (j > 0 && Array[j-1] > Array[j])
        {
            swap(Array[j], Array[j-1]);
            j--;
        }
    }
}


std::deque<int> merge(std::deque<int> Array1, std::deque<int> Array2)
{
    std::deque<int> Array3;

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



std::deque<int> merge_sort(std::deque<int>& arr)
{
    
    if (arr.size() - 1 <= 15) {
        insertAlgo(arr);
        return arr;
    } else {

        std::deque<int> Array1;
        std::deque<int> Array2;
    
        for (size_t i = 0 ; i < arr.size()/2; i++)
            Array1.push_back(arr[i]);
        for (size_t i = arr.size()/2 ; i < arr.size(); i++)
            Array2.push_back(arr[i]);
            
        Array1 = merge_sort(Array1);
        Array2 = merge_sort(Array2);

        return (merge(Array1, Array2));
    }
}



void    insertAlgo(std::vector<int> &Array)
{
    int j = 0;
    for (size_t i = 0; i < Array.size(); i++)
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



std::vector<int> merge_sort(std::vector<int>& arr) {
    
    if (arr.size() - 1 <= 15)
    {
        insertAlgo(arr);
        return arr;
    } 
    else 
    {
        std::vector<int> Array1;
        std::vector<int> Array2;
    
        for (size_t i = 0 ; i < arr.size()/2; i++)
            Array1.push_back(arr[i]);

        for (size_t i = arr.size()/2 ; i < arr.size(); i++)
            Array2.push_back(arr[i]);


        Array1 = merge_sort(Array1);
        Array2 = merge_sort(Array2);

        return (merge(Array1, Array2));
    }
}