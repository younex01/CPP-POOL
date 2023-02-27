/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:27:45 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/25 22:57:57 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("RobotomyRequestForm")
{
    std::cout << "RobotomyRequestForm : Default constructor called." << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm : Constructor called with parameters." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
    std::cout << "RobotomyRequestForm : Copy constructor called" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm : Destructor called." << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj)
{
    std::cout << "RobotomyRequestForm : Assignment operator called." << std::endl;
    this->_target = obj._target;
    return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand(time(0));
	int random = rand();
	if (executor.getGrade() >= this->getexecuteGrade() || !this->getSigned())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << "some drilling noises" << std::endl;
		if (random % 2)
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "The robotomy failed" << std::endl;
	}
}