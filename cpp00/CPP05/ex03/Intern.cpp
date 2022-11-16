/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:05:14 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 13:29:07 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char* Intern::FormNotFound::what() const throw()
{
	return ("Sry Form Not found");
}

Form    *Intern::robotform(std::string target)
{
	RobotomyRequestForm *robot = new RobotomyRequestForm(target);
	Form *form = robot;
	return (form);
}

Form    *Intern::shrubberyform(std::string target)
{
    ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm(target);
	Form *form = shrubbery;
	return (form);
}

Form    *Intern::presidentialform(std::string target)
{
    PresidentialPardonForm *presidential = new PresidentialPardonForm(target);
	Form *form = presidential;
	return (form);
}

Form   *Intern::makeForm(std::string form, std::string target)
{
    int i = 0;
    typedef Form*(Intern::*functionPtr)(std::string);
	functionPtr Formfunct[] = {&Intern::robotform, &Intern::shrubberyform, &Intern::presidentialform};
    std::string Formsnames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    for (i = 0; i < 3; i++)
    {
        if (form.compare(Formsnames[i]) == 0)
            break ;
    }
    switch (i)
    {
        case 0:
        	return (((this->*Formfunct[i])(target)));
        case 1:
        	return (((this->*Formfunct[i])(target)));
        case 2:
        	return (((this->*Formfunct[i])(target)));
    	default:
            throw FormNotFound();
    }
	return ((Form*)((this->*Formfunct[i])(target)));
}


Intern::Intern()
{

}

void    Intern::operator= (const Intern &rhs)
{
    if (this != &rhs)
    {
        
    }
}

Intern::Intern(const Intern &rhs)
{
    *this = rhs;
}

Intern::~Intern()
{

}
