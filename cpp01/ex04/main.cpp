/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:19:45 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/14 13:31:35 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
	std::string filename, s1, s2, replaced_filename;
	if (ac == 4)
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
		std::size_t p;
		std::string rest;
		std::string tmp;
		int i = 0;
		int j = 0;
		while (std::getline(input_file, line))
		{
			p = 0;
			while ((p = line.find(s1, p)) != std::string::npos)
			{
				i = p + s1.size();
				j = line.size() - i;
				rest = line.substr(i, j);
				tmp = line.substr(0, p) + s2 + rest;
				line = tmp;
			}
			output_file << line << std::endl;
		}
		input_file.close();
		output_file.close();
	}
	return (0);
}