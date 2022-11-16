/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:47:07 by sahafid           #+#    #+#             */
/*   Updated: 2022/11/09 17:16:15 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"



int main()
{
    try {
        std::vector<int> ar;
        ar.push_back(1);
        ar.push_back(2);
        ar.push_back(5);
        ar.push_back(4);
        ar.push_back(7);
        ar.push_back(4);
    
        easyfind(ar, 5);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}