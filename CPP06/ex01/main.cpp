/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:39:37 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/02 09:33:52 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


int main()
{
    Data entity;

    entity.i = 56;

    Data *test = deserialize(serialize(&entity));
    std::cout << &entity << " " << test << std::endl;
    std::cout << &entity << " " << serialize(&entity) << std::endl;
    std::cout << entity.i << " " << test->i << std::endl;
    return 0;
}
