/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:35:17 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/03 11:24:15 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "casting.hpp"
#include <iostream>


int main(int argc, char *argv[])
{
    try {
        if (argc != 2)
        {
            std::cout << "Wrong number of arguments" << std::endl;
            return (1);    
        }
        Casting cast(argv[1]);
        cast.checkTypes();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
