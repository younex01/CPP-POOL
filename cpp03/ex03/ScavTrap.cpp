/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:14:41 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/23 19:03:00 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    setHit(100);
    setEnergy(50);
    setAttack(20);
	std::cout << "ScavTrap Default constructor called" << std::endl;   
}

ScavTrap::ScavTrap(std::string name)
{
    setName(name);
    setHit(100);
    setEnergy(50);
    setAttack(20);
	std::cout << "ScavTrap String constructor called" << std::endl;   
}

ScavTrap::ScavTrap(const ScavTrap & other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;   
}

ScavTrap & ScavTrap::operator=(ScavTrap const & scavtrap)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if(this != &scavtrap)
    {
        this->_name = scavtrap._name;
        this->_hit = scavtrap._hit;
        this->_energy = scavtrap._energy;
        this->_attack = scavtrap._attack;
    }
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (getHit() == 0 || getEnergy() == 0)
    {
        std::cout << getName() << " ScavTrap has no energy or health points left to attack." << std::endl;
        return;
    }
    this->_energy--;
    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing "<< getAttack() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}