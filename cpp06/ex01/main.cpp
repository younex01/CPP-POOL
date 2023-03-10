/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 05:46:54 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 17:20:13 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data;
	uintptr_t pt;
	data.data = 42;
	std::cout << &data << std::endl;
	std::cout << (pt = Serializer::serialize(&data)) << std::endl;
	std::cout << Serializer::deserialize(pt) << std::endl;
	std::cout << Serializer::deserialize(pt)->data << std::endl;
	// int a = 0x40400000; //3
	// std::cout << a << std::endl;
	// float *b = reinterpret_cast<float *> (&a);
	// std::cout << *b; 
	return 0;
}