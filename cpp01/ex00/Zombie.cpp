/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:46:29 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/12 14:47:32 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) 
{
	setZombie(name);
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name
			  << ":"
			  << " is destroyed\n";
	return;
}

std::string	Zombie::getZombie(void) const
{
	return this->_name;
}

void Zombie::setZombie(std::string str)
{
	if(!str.empty())
		this->_name = str;
	return;
}

void Zombie::announce()
{
		std::cout << this->_name
			  << ":"
			  << "  BraiiiiiiinnnzzzZ...\n";
}