/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sahafid <sahafid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:16:31 by sahafid           #+#    #+#             */
/*   Updated: 2022/10/31 11:16:51 by sahafid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    	private:
    const	std::string name;
    bool        signe;
	const	int	gradetosign;
	const	int	gradetoexec;
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
	class FormNotSignedException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	Form(std::string name, int gradetosign, int gradetoexec);
	std::string getName() const;
	bool	getSigned() const;
	int		getGradeToSign();
	int		getGradeToexec() const;
	void	setGradeToExec(int grade);
	void	setGradeToSign(int grade);
    void	beSigned(Bureaucrat &bureaucrat);
	virtual void	execute(Bureaucrat const & executor) const = 0;
	Form();
    void    operator= (const Form &rhs);
    Form(const Form &rhs);
    virtual ~Form();
};

std::ostream& operator<< (std::ostream& out, Form &form);