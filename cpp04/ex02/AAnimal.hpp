/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:30 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 18:51:29 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class	AAnimal
{
	protected :
		std::string	_type;
	public :
		AAnimal();
		AAnimal(const AAnimal &animal);
		AAnimal	&operator=(const AAnimal &animal);
		virtual ~AAnimal();
		virtual std::string	getType() const;
		virtual void	makeSound() const = 0;
};

#endif