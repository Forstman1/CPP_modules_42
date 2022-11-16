/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:15:13 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 13:34:47 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (getGradeToexec() < executor.getGrade())
        throw Form::GradeTooLowException();
    if (!getSigned())
        throw Form::FormNotSignedException();
    std::ofstream out;
    std::string target = this->_target;
    target += "_shrubbery";
    out.open(target, std::ofstream::trunc);
    out << "\n";
    out << "\n";
    out << "\n";
    out << "                   v .   ._, |_  .,				" << std::endl;
    out << "            `-._\\/  .  \\ /    |/_				" << std::endl;
    out << "                \\  _\\, y | \\//  				" << std::endl;
    out << "          _\\_.___\\, \\/ -.\\||   				" << std::endl;
    out << "            `7-,--.`._||  / / ,   				" << std::endl;
    out << "            /'     `-. `./ / |/_.'				" << std::endl;
    out << "                      |    |//    				" << std::endl;
    out << "                      |_    /     				" << std::endl;
    out << "                      |-   |      				" << std::endl;
    out << "                      |   =|                 " << std::endl;
    out << "                      |    |            " << std::endl; 
    out << "--------------------/ ,  . \\--------._" << std::endl;
    out << "\n";
    out << "\n";
    out << "\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : Form("ShrubberyCreationForm", 145, 137)
{
    *this = rhs;
}

void    ShrubberyCreationForm::operator= (const ShrubberyCreationForm &rhs)
{
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}