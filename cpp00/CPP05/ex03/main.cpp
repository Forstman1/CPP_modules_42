/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:57:31 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 13:30:23 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

int main()
{
    int grade = 20;
    try
    {
        Bureaucrat mini("sami", grade);
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        // std::cout << rrf->getName();
        mini.signForm(*rrf);
        mini.executeForm(*rrf);
        // rrf->execute(mini);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}