/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:36:16 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/23 17:25:50 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	player("player1"); //100
	ScavTrap	player2("player2"); //100
	
	std::cout << "-----------------------------------" << std::endl;
	
	player.attack("player2");
	player2.takeDamage(50); //50
	player2.beRepaired(10); // 60
	player2.attack("player1");
	player.takeDamage(100); // 100 - 100 = 0
	player.attack("player2");
	player2.guardGate();
	std::cout << "-----------------------------------" << std::endl;
}