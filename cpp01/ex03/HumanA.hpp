/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:48:10 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/13 14:36:41 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon const &		_weapon;
public:
	HumanA(std::string name, Weapon const & weapon);
	~HumanA();
	void	attack();
	std::string getName() const;
	void		setName(std::string name);
};

#endif