/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:13:38 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/25 01:49:52 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat test("hassan", 2);
		std::cout << test << std::endl;
		
		test.decGrade();
		std::cout << test << std::endl;
		
		test.incGrade();
		std::cout << test << std::endl;
		
		test.incGrade();
		std::cout << test << std::endl;

		// test.incGrade();
		// std::cout << test << std::endl;

		// Bureaucrat test2("test 2", 160);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}