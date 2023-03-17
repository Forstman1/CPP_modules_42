/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:39:18 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/17 23:37:12 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "fcntl.h"
#include <deque>
#include <fstream>
#include <iterator>
#include <map>
#include <algorithm>


class BitcoinExchange {
    private:
        std::map<std::string, double> btc_exchange; 
        std::deque<std::string> allData;
        
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        void    setBtcData(std::deque<std::string> &data);
        void    ParseData(std::deque<std::string> &lines);
        void    check(std::deque<std::string> &data);
        int     check_int(std::string &number);
        int     check_double(std::string &number);
        void    check_date(std::string &date);
        void    convert(double value, std::string &date);


    
};



std::string trim(std::string &s, char c);
int	ft_stoi(std::string str);
std::deque<std::string> split(std::string s, char c);
