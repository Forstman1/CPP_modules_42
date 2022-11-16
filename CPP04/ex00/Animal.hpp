/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:07 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 10:55:50 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		std::string	getType() const;
		virtual void	makeSound() const;
		Animal(std::string type);
		Animal(const Animal &other);
		void	operator= (const Animal &rhs);
		Animal();
		virtual ~Animal();
};