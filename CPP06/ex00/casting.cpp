/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:11:09 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/03 12:00:37 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "casting.hpp"

void	Casting::checkTypes()
{
    if (input.empty())
    {
        std::cout << "invalid argument\n";
        return ;
    }
    checkChar();
	checkInt();
    checkFloat();
    checkDouble();
    converttoalltypes();
}

Casting::Casting (std::string input)
{
    this->input = input;
    this->type = "none";
}

void	Casting::checkInt()
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if ((input[i] == '-' || input[i] == '+') && i == 0)
			continue;
		else if (!isdigit(input[i]))
			return ;
	}
	this->type = "int";
	return ;
}

void    Casting::checkFloat()
{
    std::string floatpseudo[3] = {"-inff", "+inff", "nanf"};
    int point = 0;
    int fchar = 0;
    for (int i = 0; i < 3; i++)
    {
        if (input.compare(floatpseudo[i]) == 0)
        {
            this->type = "float";
			return ;
        }
    }
    for (size_t i = 0; i < input.length(); i++)
    {
        if ((input[i] == '-' || input[i] == '+') && i == 0)
			continue;
        else if (!isdigit(input[i]) && input[i] != '.' && input[i] != 'f')
			return ;
        else if (input[i] == '.')
        {
            if (isdigit(input[i + 1]) && isdigit(input[i - 1]))
                point++;
            else
                return ;
        }
        else if  (input[i] == 'f')
        {
            if (!input[i + 1] && isdigit(input[i - 1]))
                fchar++;
            else
                return ;
        }
    }
    if (!(point == 1 && fchar == 1))
        return ;
    this->type = "float";
    return ;
}

void    Casting::checkDouble()
{
    std::string doublepseudo[3] = {"-inf", "+inf", "nan"};
    int point = 0;
    for (int i = 0; i < 3; i++)
    {
        if (input.compare(doublepseudo[i]) == 0)
        {
            this->type = "double";
			return ;
        }
    }
    for (size_t i = 0; i < input.length(); i++)
    {
        if ((input[i] == '-' || input[i] == '+') && i == 0)
			continue;
        else if (!isdigit(input[i]) && input[i] != '.')
			return ;
        else if (input[i] == '.')
        {
            if (isdigit(input[i + 1]) && isdigit(input[i - 1]))
                point++;
            else
                return ;
        }
    }
    if (point != 1)
        return ;
    this->type = "double";
    return ;
}

void    Casting::checkChar()
{
    if (input.length() == 1 && isascii(input[0]) && !isdigit(input[0]))
    {
        this->type = "char";
        return ;
    }
}
Casting::~Casting()
{
    
}