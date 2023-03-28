/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 22:05:35 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/20 18:34:43 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <iomanip>



void    sortVect(int ac, char **av, std::vector<int> &numbers1, std::vector<int> &save);
void    sortDeq(int ac, char **av, std::deque<int> &numbers2);

std::vector<std::string> split(std::string s, char c);
std::string trim(std::string &s, char c);
void    swap(int &first, int &second);
std::vector<int> merge_sort(std::vector<int>& arr);
std::deque<int> merge_sort(std::deque<int>& arr);