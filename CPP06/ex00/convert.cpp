/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:28:51 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/03 11:13:36 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "casting.hpp"

void	Casting::converttoalltypes()
{
	size_t i = 0;
    std::string types[] = {"char", "float", "double", "int"};
    if (type.compare("none") == 0)
    {
		std::cout << "pls enter one of literal types" << std::endl;
		return ;
    }
    for (i = 0; i < types->length(); i++)
	{
		if (types[i].compare(this->type) == 0)
			break ;
	}
	switch (i)
	{
		case 0:
			charToAll();
			return;
		case 1:
			floatToAll();
			return;
		case 2:
			doubleToAll();
			return;
		case 3:
			intToAll();
			return;
		default:
			break;
	}
}

void	Casting::charToAll()
{
	int c = this->input[0];
	if (isprint(c))
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: "<< std::setprecision(1) <<  static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	Casting::intToAll()
{
	int c = stoi(this->input);
	if (isprint(c))
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: "<< std::setprecision(1) <<  static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	Casting::floatToAll()
{
	std::string floatpseudo[3] = {"-inff", "+inff", "nanf"};
    for (int i = 0; i < 3; i++)
    {
        if (input.compare(floatpseudo[i]) == 0)
        {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << floatpseudo[i] << std::endl;
			std::cout << "double: " << floatpseudo[i].substr(0, floatpseudo[i].length() - 1) << std::endl;
			return ;
        }
    }
	float c = stof(this->input);
	if (isprint(static_cast<int>(c)))
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (c > INT_MAX || c < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: "<< static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	Casting::doubleToAll()
{
	std::string floatpseudo[3] = {"-inf", "+inf", "nan"};
    for (int i = 0; i < 3; i++)
    {
        if (input.compare(floatpseudo[i]) == 0)
        {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << floatpseudo[i] + "f" << std::endl;
			std::cout << "double: " << floatpseudo[i] << std::endl;
			return ;
        }
    }
	double c = stod(this->input);
	if (isprint(static_cast<int>(c)))
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (c > INT_MAX || c < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: "<< static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}
