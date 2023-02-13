/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:33:15 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/13 13:23:28 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
	return this->_type;
}

void		Weapon::setType(std::string type)
{
	if(!type.empty())
		this->_type = type;
	return;
}

