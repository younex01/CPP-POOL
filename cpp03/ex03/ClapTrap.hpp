/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:36:13 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/21 21:12:45 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    unsigned int _hit;
    unsigned int _energy;
    unsigned int _attack;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap & other);
    ClapTrap & operator=(ClapTrap const & claptrap);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void) const;
    void setName(std::string name);
    unsigned int getHit(void) const;
    void setHit(unsigned int hit);
    unsigned int getEnergy(void) const;
    void setEnergy(unsigned int energy);
    unsigned int getAttack(void) const;
    void setAttack(unsigned int attack);
};

#endif