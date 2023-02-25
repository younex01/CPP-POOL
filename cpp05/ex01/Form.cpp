/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:22:54 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/25 19:22:55 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("form"), _signed(false), _signGrade(100), _executeGrade(30)
{
    std::cout << "Form : Default Constructor called" << std::endl;
}

Form::Form(const std::string name, int const signGrade, int const executeGrade): _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
    std::cout << "Form : Constructor called with parameters" << std::endl;
    if (signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
    else if (signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
}


Form::Form(Form const & src): _name(src.getName()), _signGrade(src.getSignGrade()), _executeGrade(src.getexecuteGrade())
{
    std::cout << "Form : Copy constructor called" << std::endl;
    *this = src;
}

Form::~Form()
{
    std::cout << "Form : Destructor called" << std::endl;
}

Form & Form::operator=(Form const & obj)
{
    std::cout << "Form : Assignment operator called" << std::endl;
    this->_signed = obj._signed;
    
    return (*this);
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getSigned() const
{
    return (this->_signed);
}

int Form::getSignGrade() const
{
    return (this->_signGrade);
}

int Form::getexecuteGrade() const
{
    return (this->_executeGrade);
}

void    Form::beSigned(Bureaucrat &Bur)
{
    if (Bur.getGrade() <= this->getSignGrade())
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Form const & obj)
{
    o << "Form name:" << obj.getName() << std::endl << "Form sign: " << obj.getSigned() <<std::endl << "Form signGrade: " << obj.getSignGrade() << std::endl << "Form executeGrade:" << obj.getexecuteGrade() << std::endl;
    return (o);
}