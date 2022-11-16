/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:29:28 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/02 12:51:57 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Animal *Array[4];

    for (int i = 0; i <= 4; i++)
    {
        if (i <= 2)
            Array[i] = new Dog();
        else if (i > 2)
            Array[i] = new Cat();
    }
    for (int i = 0; i <= 4; i++)
    {
        Array[i]->makeSound();
        delete Array[i];
    }
    return 0;
}
