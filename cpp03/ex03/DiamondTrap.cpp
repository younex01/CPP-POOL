/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 00:20:31 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/23 18:59:57 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    std::cout << "DiamondTrap Default constructor called" << std::endl;   
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
    _hit = FragTrap::_hit;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    std::cout << "DiamondTrap String constructor called" << std::endl;   
}

DiamondTrap::DiamondTrap(const DiamondTrap & other)
{
	std::cout << "Diamond Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;   
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & diamondtrap)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    this->_name = diamondtrap._name;
    this->_hit = diamondtrap._hit;
    this->_energy = diamondtrap._energy;
    this->_attack = diamondtrap._attack;
	return *this;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

std::string DiamondTrap::getName(void) const
{
    return (this->_name);
}
void DiamondTrap::setName(std::string name)
{
    this->_name = name;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is :" << DiamondTrap::getName() << " and the ClapTrap name is :" << ClapTrap::getName() << std::endl;
}