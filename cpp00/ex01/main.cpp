/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:23:13 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/08 08:13:14 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string i;
	PhoneBook New;
	std::cout << "___________________________________________________________________\n"
			  << "|W-E-L-C-O-M-E----T-O----M-Y----A-W-E-S-O-M-E----P-H-O-N-E-B-O-O-K|\n"
			  << "-------------------------------------------------------------------\n";
	while(1)
	{
		std::cout	<< std::endl
					<< "\t\t\tchoose option\n"
					<< "\t\t(1)ADD (2)SEARCH (3)EXIT :";
		if(!std::getline(std::cin, i))
			exit (1);
		std::cout	<< std::endl;
		if(i == "1")
			New.Add();
		else if( i == "2")
			New.Search();
		else if( i == "3")
			exit (0);
		else if(!i.empty())
			std::cout	<< "\t\tsorry option not found!!"
						<< std::endl;
		i.clear();
	}
	return 0;
}