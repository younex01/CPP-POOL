/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:13:38 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/25 23:57:09 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat test("m9adem", 2);
		std::cout << test << std::endl;

		ShrubberyCreationForm s("shrubbery");
		s.beSigned(test); //true
		s.execute(test);
		test.executeForm(s);

		RobotomyRequestForm r("robot");
		r.beSigned(test);
		r.execute(test);
		test.executeForm(r);

		PresidentialPardonForm p("president");
		p.beSigned(test);
		p.execute(test);
		test.executeForm(p);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}