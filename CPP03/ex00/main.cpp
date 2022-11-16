/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:09:04 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/26 10:25:54 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap sami("test");
    ClapTrap notest("notestss");

    sami.attack(notest.getName());
    notest.takeDamage(12);
    sami.attack(notest.getName());
    notest.takeDamage(1);
    // sami.beRepaired(9);
    return 0;
}
