/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:03:03 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/20 01:25:14 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	ft_isspace(char a)
{
	return (a == '\t'
		|| a == '\n'
		|| a == '\v'
		|| a == '\f'
		|| a == '\r'
		|| a == ' ');
}

int	ft_atoi(std::string number)
{
	int		i;
	int		res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(number[i]))
        return -1;
	if (number[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (number[i] == '+')
		i++;
	while (number[i] >= '0' && number[i] <= '9')
		res = res * 10 + number[i++] - '0';
    while (ft_isspace(number[i]))
        return -1;
    if (number[i] != '\0')
        return (-1);
	return (res * sign);
}

int	 Contact::Get_Index()
{
    return (index);
}
std::string	 Contact::Get_FirstName()
{
    return (FirstName);
}
std::string	 Contact::Get_LastName()
{
    return (LastName);
}
std::string	 Contact::Get_NickName()
{
    return (NickName);
}
std::string	 Contact::Get_PhoneNumber()
{
    return (Phone_Number);
}
std::string	 Contact::Get_DarkestSecret()
{
    return (Darkest_Secret);
}