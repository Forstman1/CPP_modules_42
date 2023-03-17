/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:04:12 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/16 17:15:43 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "BitcoinExchange.hpp"



int main(int argc, char **argv)
{
    
    std::ifstream fd;
    fd.open(argv[1]);
    std::ifstream fd1;
    fd1.open("data.csv");
    std::vector<std::string> lines;
    std::vector<std::string> lines1;

    std::string line;
    BitcoinExchange x;
    
    if (!fd.is_open())
		throw std::invalid_argument("can't open file");
    if (!fd1.is_open())
		throw std::invalid_argument("can't open file");

    
    while (getline(fd1, line))
        if (!line.empty())
		    lines.push_back(line);
    x.setBtcData(lines);
    line = "";
    
    while (getline(fd, line))
        if (!line.empty())
		    lines1.push_back(line);
    x.ParseData(lines1);
}