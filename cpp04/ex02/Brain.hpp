/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 02:57:57 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/24 18:22:14 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	private :
		int _index;
		std::string _ideas[100];
	public :
		Brain();
		Brain(const Brain &brain);
		Brain	&operator=(const Brain &brain);
		~Brain();
		void    setIdea(const std::string & idea);
		std::string getIdea(int pos) const;
};

#endif