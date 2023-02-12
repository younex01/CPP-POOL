/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:20:26 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/12 17:20:27 by yelousse         ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie(void);
	void announce( void );
	std::string	getZombie(void) const;
	void	setZombie(std::string str);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif