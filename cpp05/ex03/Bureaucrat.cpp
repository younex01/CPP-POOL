/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:13:27 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/25 23:46:47 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bureau"), _grade(100)
{
    std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    std::cout << "Bureaucrat : Constructor called with parameters" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name)
{
    std::cout << "Bureaucrat : Copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat : Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj)
{
    std::cout << "Bureaucrat : Assignment operator called" << std::endl;
    if(this != &obj)
        this->_grade = obj.getGrade();
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void    Bureaucrat::incGrade()
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void    Bureaucrat::decGrade()
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() <<std::endl;
    return (o);
}

void    Bureaucrat::signForm(AForm &form) const
{
    if (form.getSigned() == true)
    {
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    else
        std::cout << this->getName() << " couldn’t sign " << form.getName() << " because the form grade hasn't been checked." << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form)
{
	if (form.getSigned() && this->getGrade() <= form.getexecuteGrade())
		std::cout << this->getName() << " executed \n" << form << std::endl;
	else
		std::cout << this->getName() << " couldn't executed \n" << form << std::endl;
}