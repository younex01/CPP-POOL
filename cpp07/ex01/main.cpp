/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:28:56 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 23:16:22 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <stack>
#include <vector>

int main()
{

	// std::stack<int, std::vector<int> >  mystack;

	std::vector<int>  vect;
	 

	vect.push_back(5);
	vect.push_back(6);
	vect.push_back(7);
	vect.push_back(8);
	vect.push_back(9);
	std::vector<int>::iterator end = vect.end();
	std::cout << *end <<std::endl;
	for ( std::vector<int>::iterator it = vect.begin(); it != end; it++)
	{
		std::cout << *it <<std::endl;
	}
	

	 
	return 0;
}
