/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:50:54 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/22 00:01:06 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie* zombies = new(std::nothrow) Zombie[N];
    if (!zombies)
        return (NULL);
    while (i < N)
    {
        zombies[i].setZombieName(name); 
        i++;
    }
    return (zombies);
}