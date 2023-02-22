/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:36:16 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/21 23:59:57 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	player("player1");
	
	player.attack("player2");
	player.takeDamage(5);
	player.beRepaired(10);
	player.takeDamage(15);
	player.attack("player2");
	player.takeDamage(5);
}