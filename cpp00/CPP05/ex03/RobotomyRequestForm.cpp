/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:49:26 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 09:08:25 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand(time(NULL));
    if (getGradeToexec() < executor.getGrade())
        throw Form::GradeTooLowException();
    if (!getSigned())
        throw Form::FormNotSignedException();
    std::cout << "Drilling Noise !!" << std::endl;
    int random = rand();
    if (random % 2 == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << " has failed to robotomized" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : Form("RobotomyRequestForm", 72, 45)
{
    *this = rhs;
}

void    RobotomyRequestForm::operator= (const RobotomyRequestForm &rhs)
{
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}