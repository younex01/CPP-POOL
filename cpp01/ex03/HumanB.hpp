/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:48:06 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/13 14:48:11 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon*		_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	std::string getName() const;
	void	setName(std::string name);
	void	attack();
	void	setWeapon(Weapon& weapon);
};


#endif