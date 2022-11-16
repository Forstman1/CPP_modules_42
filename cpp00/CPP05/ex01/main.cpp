/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:57:31 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 11:16:36 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    int grade = 150;
    try
    {
        Bureaucrat mini("sami", grade);
        Form form("Form", 140, 120);
        std::cout << mini.getGrade() << std::endl;
        mini.increment();
        std::cout << mini << std::endl;
        mini.signForm(form);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}