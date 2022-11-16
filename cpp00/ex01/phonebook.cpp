/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:08:29 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/20 02:30:04 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	PhoneBook::AddContact()
{
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    
	if (index == 8)
    {
        full = 1;
        index = 0;
    }
    std::cout << "Enter FirstName" << std::endl;
    if (!std::getline(std::cin, FirstName))
        return (1);
    if (FirstName.empty())
        return (0);
    std::cout << "Enter LastName" << std::endl;
    if (!std::getline(std::cin, LastName))
        return (1);
    if (LastName.empty())
        return (0);
    std::cout << "Enter NickName" << std::endl;
    if (!std::getline(std::cin, NickName))
        return (1);
    if (NickName.empty())
        return (0);
    std::cout << "Enter Phone_Number" << std::endl;
    if (!std::getline(std::cin, PhoneNumber))
        return (1);
    if (PhoneNumber.empty())
        return (0);
    std::cout << "Enter Darkest_Secret" << std::endl;
    if (!std::getline(std::cin, DarkestSecret))
        return (1);
    if (DarkestSecret.empty())
        return (0);
    if (index == -1)
        index = 0;
    this->contact[index].Set_FirstName(FirstName);
    this->contact[index].Set_LastName(LastName);
    this->contact[index].Set_NickName(NickName);
    this->contact[index].Set_PhoneNumber(PhoneNumber);
    this->contact[index].Set_DarkestSecret(DarkestSecret);
	this->contact[index].Set_Index(index);
    this->index++;
    return (0);
}

void PhoneBook::getContact(int index)
{
    int i = 0;

    if (this->index == -1)
    {
        std::cout << "No Contact With That Index" << std::endl;
        return ;
    }
    while (i <= index && i < 8)
    {
        if (contact[i].Get_Index() == index)
        {
			std::cout << this->contact[i].Get_FirstName() << std::endl;
			std::cout << this->contact[i].Get_LastName() << std::endl;
			std::cout << this->contact[i].Get_NickName() << std::endl;
			std::cout << this->contact[i].Get_PhoneNumber() << std::endl;
			std::cout << this->contact[i].Get_DarkestSecret() << std::endl;
			return ;
		}
        i++;
    }
    std::cout << "No Contact With That Index" << std::endl;
}

void    PhoneBook::setIndex()
{
    this->index = -1;
    this->full = false;
}

int main()
{
    PhoneBook	phonebook;
	std::string	Input;
    int i = 0;

    phonebook.setIndex();
    while (true)
    {
        std::cout << "Promt > ";
        if (!std::getline(std::cin, Input))
            break ;
        if (!Input.compare("ADD"))
        {
            if (phonebook.AddContact())
                break ;
        }
        else if (!Input.compare("SEARCH"))
        {
            phonebook.ShowContacts();
            if (!std::getline(std::cin, Input))
                return (0);
            if (Input.empty())
            {
                std::cout << "Error : Enter Numeric Positive Number Next Time" << std::endl;
                continue;
            }
			i = ft_atoi(Input);
            if (i >= 0)
			    phonebook.getContact(i);
            else
                std::cout << "Error : Enter Numeric Positive Number Next Time" << std::endl;
        }
        else if (!Input.compare("EXIT"))
        {
            std::cout << "Program Exited" << std::endl;
            break ;
        }
    }
    return (0);
}
