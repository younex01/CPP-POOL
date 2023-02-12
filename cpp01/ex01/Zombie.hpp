/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:23:23 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/12 18:26:32 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	~Zombie(void);
	void announce( void );
	std::string	getZombie(void) const;
	void	setZombie(std::string str);
};

Zombie* zombieHorde( int N, std::string name );

#endif