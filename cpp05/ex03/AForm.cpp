/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:26:57 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/26 00:04:29 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("Aform"), _signed(false), _signGrade(100), _executeGrade(30)
{
    std::cout << "AForm : Default Constructor called" << std::endl;
}

AForm::AForm(const std::string name, int const signGrade, int const executeGrade): _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade)
{
    std::cout << "AForm : Constructor called with parameters" << std::endl;
    if (signGrade < 1 || executeGrade < 1)
        throw AForm::GradeTooHighException();
    else if (signGrade > 150 || executeGrade > 150)
        throw AForm::GradeTooLowException();
}


AForm::AForm(AForm const & src): _name(src.getName()), _signGrade(src.getSignGrade()), _executeGrade(src.getexecuteGrade())
{
    std::cout << "AForm : Copy constructor called" << std::endl;
    *this = src;
}

AForm::~AForm()
{
    std::cout << "AForm : Destructor called" << std::endl;
}

AForm & AForm::operator=(AForm const & obj)
{
    std::cout << "AForm : Assignment operator called" << std::endl;
    this->_signed = obj._signed;
    
    return (*this);
}

std::string AForm::getName() const
{
    return (this->_name);
}

bool AForm::getSigned() const
{
    return (this->_signed);
}

int AForm::getSignGrade() const
{
    return (this->_signGrade);
}

int AForm::getexecuteGrade() const
{
    return (this->_executeGrade);
}

void    AForm::beSigned(Bureaucrat &Bur)
{
    if (Bur.getGrade() <= this->getSignGrade())
        this->_signed = true;
    else
        throw AForm::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, AForm const & obj)
{
    o << "Form name: " << obj.getName() << std::endl << "Form sign: " << obj.getSigned() <<std::endl << "AForm signGrade: " << obj.getSignGrade() << std::endl << "AForm executeGrade: " << obj.getexecuteGrade() << std::endl;
    return (o);
}