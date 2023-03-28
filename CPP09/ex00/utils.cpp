/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:09:46 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/20 16:16:37 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



std::list<std::string> split(std::string s, char c)
{
    std::string  str;
    std::list<std::string> splited;
    int del=0, i =0, p=0, j=0;
    size_t index = s.find_first_not_of(c);
    if (index != std::string::npos)
        str += s.substr(index);
    index = str.find_last_not_of(c);
    if (index != std::string::npos)
        str = str.substr(0, index + 1);
    for (size_t i = 0; i < str.length(); i++)
		if (str[i] == c && str[i + 1] != c)
			del++;
    while (del-- >= 0)
	{
		i = 0;
		while (str[p] != c && str[p++])
			i++;
		splited.push_back(str.substr(j, i));
		while (str[p] == c)
			p++;
		j = p;
	}
	return (splited);
}


std::string trim(std::string &s, char c)
{
	std::string  str;
	size_t index = s.find_first_not_of(c);
    if (index != std::string::npos)
        str += s.substr(index);
    index = str.find_last_not_of(c);
    if (index != std::string::npos)
        str = str.substr(0, index + 1);
    
	s = str;
	return (s);
}
