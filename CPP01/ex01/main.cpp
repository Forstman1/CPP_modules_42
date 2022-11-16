/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:50:15 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/22 04:09:52 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    Zombie* zombies;
    int i = 0;
    
    zombies = zombieHorde(5, "sami");
    if (!zombies)
        return (1);
    while (i < 5)
    {
        zombies[i].announce();
        i++;
    }
    delete[] zombies;
    return (0);
}
