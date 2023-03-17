/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:04:12 by sahafid           #+#    #+#             */
/*   Updated: 2023/03/17 23:38:55 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "BitcoinExchange.hpp"



int main(int argc, char **argv)
{
  
    try {
      std::ifstream fd;
      fd.open(argv[1]);
      std::ifstream fd1;
      fd1.open("data.csv");
      
      std::deque<std::string> lines;
      std::deque<std::string> lines1;
  
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
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }
}