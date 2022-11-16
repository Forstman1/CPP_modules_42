/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:04:35 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/26 11:17:39 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType(void)
{
    return(this->type);
}

void    Weapon::setType(std::string Type)
{
    std::cout << Type << "tfoooo \n";
    this->type = Type;
}

Weapon::Weapon(std::string type)
{
    setType(type);
}