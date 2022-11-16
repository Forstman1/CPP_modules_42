/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_info.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:27:19 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/18 04:43:31 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::Set_Index(int i)
{
    index = i;
}

void	Contact::Set_FirstName(std::string info)
{
    FirstName = info;
}

void	Contact::Set_LastName(std::string info)
{
    LastName = info;
}

void	Contact::Set_NickName(std::string info)
{
    NickName = info;
}

void	Contact::Set_PhoneNumber(std::string info)
{
    Phone_Number = info;
}

void	Contact::Set_DarkestSecret(std::string info)
{
    Darkest_Secret = info;
}