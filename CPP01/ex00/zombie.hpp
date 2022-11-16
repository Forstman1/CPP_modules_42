/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:02:18 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/21 05:31:59 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class Zombie {
	private:
        std::string	name;
	public:
		void	announce(void);
		void	setZombieName(std::string name);
		Zombie(std::string name);
		~Zombie(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
