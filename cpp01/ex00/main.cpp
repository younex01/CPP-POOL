/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:09:53 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/12 17:19:44 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zombie;

	zombie = newZombie("FOO");
	zombie->announce();
	randomChump("DOO");
	delete zombie;
	return 0;
}