/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:57:31 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 11:34:57 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    int grade = 10;
    try
    {
        Bureaucrat mini("sami", grade);
        std::cout << mini.getGrade() << std::endl;
        mini.decrement();
        std::cout << mini << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}