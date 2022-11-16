/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:12 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/28 12:10:22 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
        private:
    Brain *brain;
        public:
    void    makeSound() const;
    Dog();
    ~Dog();
    Dog(const Dog &other);
	void	operator= (const Dog &rhs);
};