/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:15:19 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/13 19:15:42 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{
}

std::string HumanB::getName() const
{
	return this->_name;
}

void		HumanB::setName(std::string name)
{
	if (!name.empty())
		this->_name = name; 
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << getName()
			  << " attacks with their "
			  << this->_weapon->getType()
			  << std::endl;
}