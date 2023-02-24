/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:57:59 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 02:19:08 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected :
		std::string	_type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wronganimal);
		WrongAnimal	&operator=(const WrongAnimal &wronganimal);
		~WrongAnimal();
		std::string	getType() const;
		void	makeSound() const;
};

#endif