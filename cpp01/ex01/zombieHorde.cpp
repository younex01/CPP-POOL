/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:38:43 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/12 18:08:44 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;
	
	i = 0;
	if (N <= 0)
		return (NULL);
	Zombie *zombie = new Zombie[N];
	while(i < N)
	{
		zombie[i].setZombie(name);
		i++;
	}
	return (zombie);
}