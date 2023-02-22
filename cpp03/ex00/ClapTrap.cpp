/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:36:10 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/21 19:54:01 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : _hit(10), _energy(10), _attack(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & claptrap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &claptrap)
		this->_name = claptrap.getName();
	return *this;
}

void ClapTrap::setName(std::string name)
{
	std::cout << "setName member function called" << std::endl;
    this->_name = name;
}

std::string ClapTrap::getName(void) const
{
    std::cout << "getName member function called"
            << std::endl;
    return (this->_name);
}


void ClapTrap::attack(const std::string& target)
{
    if (this->_hit == 0 || this->_energy == 0)
    {
        std::cout << this->_name << " has no energy or health points left to attack." << std::endl;
        return;
    }
    this->_energy--;
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing "<< this->_attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit == 0 || this->_energy == 0)
    {
        std::cout << this->_name << " has no energy or health points left to take damage." << std::endl;
        return;
    }
    if(amount >= this->_hit)
        this->_hit = 0;
    else
        this->_hit -= amount;
    std::cout << this->_name << " takes " << amount << " points of damage." << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit == 0 || this->_energy == 0)
    {
        std::cout << this->_name << " has no energy or health points to be repaired." << std::endl;
        return;
    }
    this->_hit += amount;
    this->_energy--;
    std::cout << "ClapTrap " << this->getName() << " repaired with " << amount << " health points"<< std::endl;
}
