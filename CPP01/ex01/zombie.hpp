/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:50:58 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/22 00:50:56 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Zombie {
        std::string	name;
	public:
		void	announce(void);
		void	setZombieName(std::string name);
		~Zombie(void);
};

Zombie*	zombieHorde(int i, std::string name);
