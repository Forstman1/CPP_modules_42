/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:18:44 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/22 16:33:39 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "zombie.hpp"

int main()
{
    Zombie zombie1("foo");
    Zombie* zombie2;
    
    zombie1.announce();
    randomChump("test");
    zombie2 = newZombie("zoo");
    if (!zombie2)
        return (0);
    zombie2->announce();
    delete zombie2;
    return (0);
}
