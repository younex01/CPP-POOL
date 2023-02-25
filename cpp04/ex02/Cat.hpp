/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:54:40 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 18:54:49 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal
{
	private:
		Brain *_brain;
	public :
		Cat();
		Cat(const Cat &cat);
		Cat	&operator=(const Cat &cat);
		~Cat();
		std::string	getType() const;
		void	makeSound() const;
		void    setIdea(const std::string & idea);
		std::string getIdea(int pos) const;
};

#endif