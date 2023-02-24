/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:36:10 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/23 16:44:32 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : _hit(10), _energy(10), _attack(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & claptrap)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if(this != &claptrap)
    {
		this->_name = claptrap.getName();
        this->_hit  = claptrap._hit;
		this->_energy = claptrap._energy;
		this->_attack = claptrap._attack;    
    }
	return *this;
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

void ClapTrap::setHit(unsigned int hit)
{
    this->_hit = hit;
}

unsigned int ClapTrap::getHit(void) const
{
    return (this->_hit);
}

void ClapTrap::setEnergy(unsigned int energy)
{
    this->_energy = energy;
}

unsigned int ClapTrap::getEnergy(void) const
{
    return (this->_energy);
}

void ClapTrap::setAttack(unsigned int attack)
{
    this->_attack = attack;
}

unsigned int ClapTrap::getAttack(void) const
{
    return (this->_attack);
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
