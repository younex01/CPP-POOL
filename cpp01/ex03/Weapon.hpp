/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:48:00 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/13 13:18:36 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type);
	~Weapon();
	std::string getType() const;
	void		setType(std::string type);
};

#endif