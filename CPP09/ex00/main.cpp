/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:04:12 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/20 17:00:05 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "BitcoinExchange.hpp"



int main(int ac, char **av)
{

    try {
      
      if (ac != 2)
        throw std::invalid_argument("wrong amount of arguments");
      
      std::ifstream fd;
      fd.open(av[1]);
      
      std::ifstream fd1;
      fd1.open("data.csv");
      
      std::list<std::string> lines;
      std::list<std::string> lines1;
  
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
      
      while (getline(fd, line))
          if (!line.empty())
		      lines1.push_back(line);
        
      x.ParseData(lines1);
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }
}