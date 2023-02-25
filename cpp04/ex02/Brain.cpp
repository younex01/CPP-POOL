/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 02:58:00 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 18:31:55 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _index(0)
{
	std::cout << "Brain : Default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain : Copy constructor called" << std::endl;
	*this = brain;
}

Brain	&Brain::operator=(const Brain &brain)
{
	int i = 0;
	this->_index = brain._index;
    while (i < brain._index)
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

void    Brain::setIdea(const std::string & idea)
{
    this->_ideas[this->_index] = idea;
    if (this->_index < 100)
        this->_index++;
}

std::string Brain::getIdea(int pos) const
{
    if (pos < this->_index)
        return (this->_ideas[pos]);
    return (NULL);
}