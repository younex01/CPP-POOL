/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:55 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 02:19:17 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(const WrongCat &wrongcat);
		WrongCat	&operator=(const WrongCat &wrongcat);
		~WrongCat();
		std::string	getType() const;
		void	makeSound() const;
};

#endif