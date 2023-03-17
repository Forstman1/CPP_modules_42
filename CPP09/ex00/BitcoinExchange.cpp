/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:08:30 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/17 17:26:32 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <algorithm>


void    BitcoinExchange::setBtcData(std::vector<std::string> &data)
{
    for (std::vector<std::string>::iterator it = data.begin()+1; it != data.end(); it++)
    {
        std::vector<std::string> input = split(*it, ',');
        double value = atof(input[1].c_str());
        trim(input[0], ' ');
        btc_exchange.insert(std::pair<std::string, double>(input[0], value));
    }
}

void    BitcoinExchange::convert(double value, std::string &date)
{
    trim(date, ' ');
    if (btc_exchange.find(date) != btc_exchange.end())
        std::cout << date << " => " << value << " = " <<  btc_exchange.find(date)->second * value << std::endl;
    else
    {
        std::map<std::string, double>::iterator it = btc_exchange.lower_bound(date);
        if (it != btc_exchange.begin())
            it--;
        std::cout << date << " => " <<  value << " = " << it->second * value << std::endl ;
    }
}

void   BitcoinExchange::check_date(std::string &date)
{
    std::vector<std::string> dates = split(date, '-');
    trim(dates[2], ' ');
    if (dates.size() != 3)
        throw std::invalid_argument("Error: bad input => " + date);
    int year = ft_stoi(dates[0]);
    int month = ft_stoi(dates[1]);
    int day = ft_stoi(dates[2]);
    if (year < 2009 || year > 2022 || month <= 0 || month > 12 || day <= 0 || day > 31)
        throw std::invalid_argument("Error: bad input => " + date);
    
}


int    BitcoinExchange::check_double(std::string &number)
{
    int point = 0;
    for (size_t i = 0; i < number.length(); i++)
    {
        if ((number[i] == '-' || number[i] == '+') && i == 0)
			continue;
        else if (!isdigit(number[i]) && number[i] != '.')
			return 0;
        else if (number[i] == '.')
        {
            if (isdigit(number[i + 1]) && isdigit(number[i - 1]))
                point++;
            else
                return 0;
        }
    }
    if (point != 1)
        return 0;
    return 1;
}

int    BitcoinExchange::check_int(std::string &number)
{
    for (size_t i = 0; i < number.length(); i++)
	{
		if ((number[i] == '-' || number[i] == '+') && i == 0)
			continue;
		else if (!isdigit(number[i]))
			return 0;
	}
    return 1;
}

void    BitcoinExchange::check(std::vector<std::string> &data)
{
    check_date(data[0]);
    trim(data[1], ' ');
    if (check_double(data[1]))
    {
        double value =  atof(data[1].c_str());
        if (value < 0 || value > 1000.0)
            throw std::invalid_argument("Error: too large a number.");
        convert(value, data[0]);       
    }
    else if (check_int(data[1]))
    {
        int value = ft_stoi(data[1]);
        if (value < 0 || value > 1000)
            throw std::invalid_argument("Error: too large a number.");
        convert(value, data[0]);       
    }
    else
        throw std::invalid_argument("Error: bad input on number " + data[1]);
}



void    BitcoinExchange::ParseData(std::vector<std::string> &lines)
{
    allData = lines;
    if (allData[0] != "date | value")
        std::cout << "Error: bad input => " << allData[0] << std::endl;
    
    for (std::vector<std::string>::iterator it = allData.begin()+1; it != allData.end(); it++)
    {
        std::vector<std::string> input = split(*it, '|');
        if (input.size() > 2)
            std::cout << "Error: too many agruments" << std::endl;
        else if (input.size() < 2)
            std::cout << "Error: missing agruments" << std::endl;
        else
        {
            try{
                check(input);
            }
            catch(std::exception &e){
                std::cout << e.what() << std::endl;
            }
        }
    }
}

BitcoinExchange::BitcoinExchange()
{
    
}
BitcoinExchange::~BitcoinExchange()
{
    
}