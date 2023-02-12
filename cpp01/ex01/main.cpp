/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:23:33 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/12 18:33:21 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie = zombieHorde(5, "FOO");
	int i = 0;
	while (i < 5)
	{
		zombie[i].announce();
		i++;
	}
	delete [] zombie;
	return (0);
}