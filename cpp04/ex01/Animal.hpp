/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:30 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 02:40:40 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected :
		std::string	_type;
	public :
		Animal();
		Animal(const Animal &animal);
		Animal	&operator=(const Animal &animal);
		virtual ~Animal();
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

#endif