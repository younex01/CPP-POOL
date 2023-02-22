/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:14:41 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/22 00:15:33 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    setHit(100);
    setEnergy(100);
    setAttack(30);
	std::cout << "FragTrap Default constructor called" << std::endl;   
}

FragTrap::FragTrap(std::string name)
{
    setName(name);
    setHit(100);
    setEnergy(100);
    setAttack(50);
	std::cout << "FragTrap String constructor called" << std::endl;   
}

FragTrap::FragTrap(const FragTrap & other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;   
}

FragTrap & FragTrap::operator=(FragTrap const & FragTrap)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if(this != &FragTrap)
		setName(FragTrap.getName());
	return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (getHit() == 0 || getEnergy() == 0)
    {
        std::cout << getName() << "FragTrap has no energy or health points left to attack." << std::endl;
        return;
    }
    this->_energy--;
    std::cout << "FragTrap " << getName() << " attacks " << target << ", causing "<< getAttack() << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Hey, let's give each other a high five! Up top!" << std::endl;
}