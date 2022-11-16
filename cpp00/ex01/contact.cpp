/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:25:04 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/20 01:00:29 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::print_contact(int i)
{
	std::string print;
	int lengh = 0;

	std::cout << "|" << std::setw(10) << this->contact[i].Get_Index();
	lengh = this->contact[i].Get_FirstName().length();
	if (lengh >= 10)
	{
        print = this->contact[i].Get_FirstName();
		print[9] = '.';
		std::cout << "|" << std::setw(10) << print.substr(0, 10)  << "|";
	}
	else
		std::cout << "|" << std::setw(10) << this->contact[i].Get_FirstName()  << "|";
	lengh = this->contact[i].Get_LastName().length();
	if (lengh >= 10)
	{
        print = this->contact[i].Get_LastName();
		print[9] = '.';
		std::cout << std::setw(10) << print.substr(0, 10)  << "|";
	}
	else
		std::cout << std::setw(10) << this->contact[i].Get_LastName()  << "|";
	lengh = this->contact[i].Get_NickName().length();
	if (lengh >= 10)
	{
        print = this->contact[i].Get_NickName();
		print[9] = '.';
        		std::cout << std::setw(10) << print.substr(0, 10)  << "|" << std::endl;
	}
	else
		std::cout << std::setw(10) << this->contact[i].Get_NickName()  << "|" << std::endl;
}

void    PhoneBook::ShowContacts()
{
    int i = 0;

    if (this->full)
    {
        while (i < 8)
        {
            print_contact(i);
			i++;
        }
    }
    else
    {
        if (index == -1)
            return ;
		while (i < index)
		{
			print_contact(i);
			i++;
		}
    }
}
