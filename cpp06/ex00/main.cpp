/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 05:01:56 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 05:03:35 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	std::string	str;

	if (ac == 2)
	{
		str = av[1];
		try
		{
			ScalarConverter::convert(str);
		}
		catch (const char* err)
		{
			std::cerr << err << std::endl;
		}
	}
	return 0;
}