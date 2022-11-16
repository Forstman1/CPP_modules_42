/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:12:33 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 11:15:43 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec) : name(name) , gradetosign(grade_sign) , gradetoexec(grade_exec)
{
    if (getGradeToSign() > 150 || getGradeToexec() > 150)
        throw GradeTooLowException();
    if (getGradeToSign() < 1 || getGradeToexec() < 1)
        throw GradeTooHighException();
    this->signe = false;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > getGradeToSign())
        throw GradeTooLowException();
    if (bureaucrat.getGrade() < 1)
        throw GradeTooHighException();
    else
        this->signe = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade too Low"); 
}

std::string Form::getName()
{
    return (this->name);
}

bool		Form::getSigned()
{
    return (this->signe);
}

int	Form::getGradeToSign()
{
    return(this->gradetosign);
}

int	Form::getGradeToexec()
{
    return(this->gradetoexec);
}

Form::Form() : name("random"), gradetosign(150), gradetoexec(150)
{
    signe = false;
}

Form::Form(const Form &rhs) : name(rhs.name), gradetosign(rhs.gradetosign), gradetoexec(rhs.gradetoexec)
{
    *this = rhs;
}

void    Form::operator= (const Form &rhs)
{
    if (this != &rhs)
    {
        this->signe = rhs.signe;
    }
}


Form::~Form()
{
    
}

std::ostream& operator<< (std::ostream& out, Form &form)
{
    out << "name of the form " << form.getName() << " and form status " << form.getSigned() << " and the grade to sign it " << form.getGradeToSign() << " and the grade to sign it " << form.getGradeToexec();
	return out;
}