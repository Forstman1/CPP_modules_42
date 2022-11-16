/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:10:09 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 11:40:45 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeToexec())
        throw Form::GradeTooLowException();
    if (!getSigned())
        throw Form::FormNotSignedException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : Form("PresidentialPardonForm", 25, 5)
{
    *this = rhs;
}

void    PresidentialPardonForm::operator= (const PresidentialPardonForm &rhs)
{
    if (this != &rhs)
    {
        this->_target = rhs._target;
    }
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}