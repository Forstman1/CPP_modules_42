/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:07 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 11:10:35 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		std::string	getType() const;
		void	setType(std::string type);
		virtual void	makeSound() const;
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		void	operator= (const Animal &rhs);
		virtual ~Animal();
};