/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:41:16 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/14 20:23:29 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n"
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\""
			  << std::endl;
}
void Harl::info( void )
{
	std::cout << "[ INFO ]\n"
			  << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << std::endl;
}
void Harl::warning( void )
{
	std::cout << "[ WARNING ]\n"
			  << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month."
			  << std::endl;
}
void Harl::error( void )
{
	std::cout << "[ ERROR ]\n"
			  << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain( std::string level )
{
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	void (Harl::*ptr_funct[4])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	while(i < 4)
	{
		if(tab[i] == level) // test
		{
			(this->*ptr_funct[i])();
			break;
		}
		i++;
	}
}
