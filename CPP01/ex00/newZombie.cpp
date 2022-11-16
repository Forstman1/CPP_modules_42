/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:04:01 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/22 00:01:43 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie*	newZombie(std::string name)
{
    Zombie* zombie;

    zombie = new(std::nothrow) Zombie(name);
    if (!zombie)
        return (NULL);
    return (zombie);
}
