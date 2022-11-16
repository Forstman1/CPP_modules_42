/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:40:43 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/22 18:07:41 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string check_string(std::string string, std::string s1, std::string s2)
{
	std::string sub = string;
	int length = 0;
	size_t pos;
	size_t i = 0;

	while ((pos = string.find(s1, i)) && pos != std::string::npos)
	{
		length = s1.length();
		sub = string.substr(0, pos);
		sub += s2;
		pos += length;
		i = pos;
		i += s2.length() - 1;
		sub += string.substr(pos, string.length());
		string = sub;
	}
	return (sub);
}

int main(int argc, char *argv[])
{
    std::ifstream   file1;
	std::ofstream   file2;
    std::string     string;
	std::string		newContent = "";
	std::string		filename;

	if (argc != 4)
	{
		std::cerr << "number arguments wrong" << std::endl;
		return 0; 
	}
	filename = argv[1];
	file1.open(filename);
	if (!file1.is_open())
	{
		std::cerr << "can't open file" << std::endl;
		return 0; 
	}
    while (getline(file1, string))
		newContent += string.append("\n");
	newContent = check_string(newContent, argv[2], argv[3]);
    file1.close();
	file2.open(filename + ".replace");
	if (!file2.is_open())
	{
		std::cerr << "can't open file" << std::endl;
		return 0; 
	}
	file2 << newContent;
	file2.close();
    return (0);
}