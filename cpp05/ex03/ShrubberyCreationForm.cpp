/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:27:55 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/25 23:39:51 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("ShrubberyCreationForm")
{
    std::cout << "ShrubberyCreationForm : Default constructor called." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm : Constructor called with parameters." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
    std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm : Destructor called." << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj)
{
    std::cout << "ShrubberyCreationForm : Assignment operator called." << std::endl;
    this->_target = obj._target;
    return (*this);
}


void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string filename;
    filename = this->_target + "_shrubbery";
    if (executor.getGrade() >= this->getexecuteGrade() || !this->getSigned())
		throw AForm::GradeTooLowException();
	else
	{
        std::ofstream output_file(filename);
        output_file << "    oxoxoo    ooxoo\n"
                    << "  ooxoxo oo  oxoxooo\n"
                    << " oooo xxoxoo ooo ooox\n"
                    << " oxo o oxoxo  xoxxoxo\n"
                    << "  oxo xooxoooo o ooo\n"
                    << "    ooo\\oo\\  /o/o\n"
                    << "        \\  \\/ /\n"
                    << "         |   /\n"
                    << "         |  |\n"
                    << "         | D|\n"
                    << "         |  |\n"
                    << "         |  |\n"
                    << "  ______/____\\____" << std::endl;
    }
}