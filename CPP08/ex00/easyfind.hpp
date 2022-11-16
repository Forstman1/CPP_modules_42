/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:47:41 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/09 17:24:53 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
// #include <deque>
#include <vector>

template<typename T>
void    easyfind(T first, int second)
{
	if (std::find(first.begin(), first.end(), second) != first.end())
		std::cout << std::find(first.begin(), first.end(), second) - first.begin() << std::endl;
	else
		throw std::invalid_argument("integer not found");
}
