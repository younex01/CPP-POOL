/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:57:53 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/12 19:21:52 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string*	strPTR = &str;
	std::string&	strREF = str;
	
	std::cout 	<< &str
				<< std::endl;
	std::cout 	<< strPTR
				<< std::endl;
	std::cout 	<< &strREF
				<< std::endl;

	std::cout 	<< str
				<< std::endl;
	std::cout 	<< *strPTR
				<< std::endl;
	std::cout 	<< strREF
				<< std::endl;
	return (0);
}