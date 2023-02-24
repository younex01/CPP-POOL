/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:36:16 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/23 17:15:28 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	player("player1"); //10
	ClapTrap	player2(player);  //10
	ClapTrap	player3("player2"); //10
	
	player2 = player3;
	
	std::cout << "-----------------------------------" << std::endl;
	
	player.attack("player2");
	player2.takeDamage(5); //5
	player2.beRepaired(10); // 15
	player2.attack("player1");
	player.takeDamage(10); // 10 - 10 = 0
	player.attack("player2");
	player2.takeDamage(5); //20
	
	std::cout << "-----------------------------------" << std::endl;
}