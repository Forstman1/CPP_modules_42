/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:03 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/26 13:33:34 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {
    public:
    void    makeSound() const;
    Cat(const Cat &other);
	void	operator= (const Cat &rhs);
    Cat();
    ~Cat();
};