/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:11:08 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/13 19:15:25 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon const & weapon): _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

std::string HumanA::getName() const
{
	return this->_name;
}
void		HumanA::setName(std::string name)
{
	if (!name.empty())
		this->_name = name; 
}

void	HumanA::attack()
{
	std::cout << getName()
			  << " attacks with their "
			  << this->_weapon.getType()
			  << std::endl;
}