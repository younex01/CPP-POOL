/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 05:46:54 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 05:56:16 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	// Data data;
	// uintptr_t pt;
	// data.data = 42;
	// std::cout << &data << std::endl;
	// std::cout << (pt = Serializer::serialize(&data)) << std::endl;
	// std::cout << Serializer::deserialize(pt) << std::endl;
	// std::cout << Serializer::deserialize(pt)->data << std::endl;
	Data	*ptr = NULL;

	if(Serializer::deserialize(Serializer::serialize(ptr)) == ptr)
	{
		std::cout << "Equals" << std::endl;
	}
	else
		std::cout << "not Equals" << std::endl;
	return 0;
}