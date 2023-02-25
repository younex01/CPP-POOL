/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:45 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 18:19:52 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain *_brain;
	public :
		Dog();
		Dog(const Dog &dog);
		Dog	&operator=(const Dog &dog);
		~Dog();
		std::string	getType() const;
		void	makeSound() const;
		void    setIdea(const std::string & idea);
		std::string getIdea(int pos) const;
};

#endif