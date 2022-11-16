/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:06:55 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/22 18:13:26 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void    harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void harl::complain(std::string level)
{
    int i = 0;
	void (harl::*complaining[])() = {&harl::debug, &harl::info, &harl::warning, &harl::error};
    std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    while (i < 4)
    {
        if (level.compare(complains[i]) == 0)
            break ;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*complaining[i++])();
        case 1:
            (this->*complaining[i++])();
        case 2:
            (this->*complaining[i++])();
        case 3:
            (this->*complaining[i])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
        
}