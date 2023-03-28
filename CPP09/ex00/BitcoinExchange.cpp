/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:08:30 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/20 19:27:59 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <algorithm>


void    BitcoinExchange::setBtcData(std::list<std::string> &data)
{
    for (std::list<std::string>::iterator it = ++data.begin(); it != data.end(); it++)
    {
        std::list<std::string> input = split(*it, ',');

        double value = atof((*++input.begin()).c_str());
        trim(*input.begin(), ' ');
        btc_exchange.insert(std::pair<std::string, double>(*input.begin(), value));
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
        {
            it--;
            std::cout << date << " => " <<  value << " = " << it->second * value << std::endl ;
        }
        else
            std::cout << "Error: bad input => " << it->second * value << std::endl ;
    }
}


void   BitcoinExchange::check_date(std::string &date)
{
    std::list<std::string> dates = split(date, '-');
    if (dates.size() != 3)
        throw std::invalid_argument("Error: bad input => " + date);
    

    std::list<std::string>::iterator year1 = dates.begin();
    std::list<std::string>::iterator month1 = ++dates.begin();
    std::list<std::string>::iterator day1 = --dates.end();




    if ((*year1).size() != 4)
        throw std::invalid_argument("Error: wrong amount of characters => " + *year1);
    else if ((*month1).size() != 2 )
        throw std::invalid_argument("Error: wrong amount of characters => " + *month1);
    else if ((*day1).size() != 2)
        throw std::invalid_argument("Error: wrong amount of characters => " + *day1);


    int year = atoi((*year1).c_str());
    int month = atoi((*month1).c_str());
    int day = atoi((*day1).c_str());
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
    if (number.empty())
		return 0;
    for (size_t i = 0; i < number.length(); i++)
	{
		if (number[i] == '+' && i == 0)
			continue;
		else if (!isdigit(number[i]))
			return 0;
	}
    return 1;
}

void    BitcoinExchange::check(std::list<std::string> &data)
{
    std::list<std::string>::iterator date = data.begin();
    std::list<std::string>::iterator it = ++data.begin();

    
    trim(*date, ' ');
    check_date(*date);
    trim(*it, ' ');
    
    
    if (check_double(*it))
    {
        double value =  atof((*it).c_str());
        if (value < 0 || value > 1000.0)
            throw std::invalid_argument("Error: too large a number.");
        convert(value, *date);

    }
    else if (check_int(*it))
    {
        int value = atoi((*it).c_str());
        if (value < 0 || value > 1000)
            throw std::invalid_argument("Error: too large a number.");
        convert(value, *date);

    }
    else
        throw std::invalid_argument("Error: number not valid " + *it);
}



void    BitcoinExchange::ParseData(std::list<std::string> &lines)
{
    trim(*lines.begin(), ' ');
    
    std::list<std::string>::iterator iter = lines.begin();

    if (*lines.begin() == "date | value")
        iter++;
    for (std::list<std::string>::iterator it = iter; it != lines.end(); it++)
    {
        std::list<std::string> input = split(*it, '|');
        
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


BitcoinExchange::BitcoinExchange (const BitcoinExchange &a)
{
    *this = a;
}

BitcoinExchange& BitcoinExchange::operator = (const BitcoinExchange &a)
{
    if (this != &a){
    }
    return *this;
}