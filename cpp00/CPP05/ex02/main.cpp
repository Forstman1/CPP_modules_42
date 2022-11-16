/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:57:31 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 11:41:48 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    int grade = 2;
    try
    {
        Bureaucrat mini("sami", grade);
        RobotomyRequestForm form2("target1");
        Form *form = &form2;
        mini.increment();
        std::cout << mini << std::endl;
        mini.signForm(*form);
        mini.executeForm(*form);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}