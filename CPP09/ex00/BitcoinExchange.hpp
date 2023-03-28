/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:39:18 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/20 21:07:40 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "fcntl.h"
#include <fstream>
#include <iterator>
#include <map>
#include <list>
#include <algorithm>


class BitcoinExchange {
    private:
        std::map<std::string, double> btc_exchange; 
    public:
    
        BitcoinExchange();
        BitcoinExchange (const BitcoinExchange &a);
        BitcoinExchange & operator = (const BitcoinExchange &a);
        ~BitcoinExchange();
        
        void    setBtcData(std::list<std::string> &data);
        void    ParseData(std::list<std::string> &lines);
        
        void    check(std::list<std::string> &data);
        int     check_int(std::string &number);
        int     check_double(std::string &number);
        
        void    check_date(std::string &date);
        void    convert(double value, std::string &date);
  
};



std::string trim(std::string &s, char c);
std::list<std::string> split(std::string s, char c);
