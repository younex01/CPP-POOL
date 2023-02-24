/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 02:58:00 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 03:48:10 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default constructor called" << std::endl;
	// for (int i = 0; i < 100; i++)
	// 	this->_ideas[i] = "idea";
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain : Copy constructor called" << std::endl;
	*this = brain;
}

Brain	&Brain::operator=(const Brain &brain)
{
	int i = 0;
    while (i < 100)
    {
		this->_ideas[i] = brain._ideas[i];
        i++;
    }
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor called" << std::endl;
}