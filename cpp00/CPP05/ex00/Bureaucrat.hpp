/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:57:29 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 11:23:55 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>


class Bureaucrat
{
    private:
        const std::string	name;
        int					grade;
    public:
        class GradeTooHighException : public std::exception
        {
            public:
        	virtual const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
        	virtual const char* what() const throw();
        };
		Bureaucrat(std::string name, int grade);
        std::string    getName(void);
        int     getGrade(void);
        void    increment(void);
        void    decrement(void);
        Bureaucrat();
        void    operator= (const Bureaucrat &rhs);
        Bureaucrat(const Bureaucrat &rhs);
        ~Bureaucrat();
};

std::ostream& operator<< (std::ostream& out, Bureaucrat &bureaucrat);