/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:19:45 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/13 20:55:52 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
	std::string filename, s1, s2, replaced_filename;
	if (ac == 3)
	{
		filename = av[1];
		s1 = av[2];
		s2 = av[3];
		replaced_filename = filename + ".replace";
		std::ifstream input_file(filename);
		if (!input_file.is_open())
		{
			std::cout << "Error opening file " << filename << std::endl;
			return 1;
		}
		std::ofstream output_file(replaced_filename);
		if (!output_file.is_open())
		{
			std::cout << "Error opening file " << replaced_filename << std::endl;
			return 1;
		}
		std::string line;
		std::size_t p = 0;
		std::string rest;
		int i = 0;
		int j = 0;
		while (std::getline(input_file, line))
		{
			while ((p = line.find(s1, p)) != std::string::npos)
			{
				while(s1[i])
					i++;
				j = p + i;
				while(line[j])
				{
					rest[]
				}
					
			}
			output_file << line << std::endl;
		}
		input_file.close();
		output_file.close();
	}
	
}