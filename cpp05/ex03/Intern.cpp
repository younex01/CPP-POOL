/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 00:10:13 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/26 00:19:58 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern : Default constructor called" << std::endl;
}

Intern::Intern(const Intern &i)
{
	std::cout << "Intern : Copy constructor called" << std::endl;
	*this = i;
}

Intern	&Intern::operator=(const Intern &i)
{
	(void)i;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern : Destructor called" << std::endl;	
}

AForm	*Intern::makeForm(std::string form_name, std::string form_target)
{
	int	i = 0;
	AForm	*f;
	std::string	name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	while (name[i] != form_name && i < 3)
		i++;
	switch (i)
	{
		case 0:
			f = new ShrubberyCreationForm(form_target);
			break;
		case 1:
			f = new RobotomyRequestForm(form_target);
			break;
		case 2:
			f = new PresidentialPardonForm(form_target);
			break;
		default:
			std::cout << "Form doesn't exist" << std::endl;
			return 0;
	}
	std::cout << "Intern creates " << f->getName() << std::endl;
	return f;
}