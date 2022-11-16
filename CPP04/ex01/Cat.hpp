/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:55:03 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/29 09:16:49 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
        private:
    Brain *brain;
        public:
    void    makeSound() const;
    Cat(const Cat &other);
	void	operator= (const Cat &rhs);
    Cat();
    ~Cat();
};