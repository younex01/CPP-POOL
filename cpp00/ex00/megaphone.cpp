/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 02:14:17 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/08 02:33:30 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int main(int ac, char **av)
{
	int			 i;
	std::string str;
	char		c;
	
	str = av[1];
	i = 0;
	if (ac == 2 )
	{
		while(str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z') 
			{
				c = toupper(str[i]);
				std::cout << c;
			}
			else
				std::cout << str[i];
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
