/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:09:46 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/16 15:58:07 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



std::vector<std::string> split(std::string s, char c)
{
    std::string  str;
    std::vector<std::string> splited;
    int del=0, i =0, p=0, j=0;
    size_t index = s.find_first_not_of(c);
    if (index != std::string::npos)
        str += s.substr(index);
    index = str.find_last_not_of(c);
    if (index != std::string::npos)
        str = str.substr(0, index + 1);
    for (int i = 0; i < str.length(); i++)
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


int	ft_stoi(std::string str)
{
	size_t	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (i != str.length())
    {
		return (-1);
    }
	return (res * sign);
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