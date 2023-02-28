/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:28:54 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 20:49:40 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	print(const T &i)
{
	std::cout << i << std::endl;
}

template<typename T>
void	iter(T *arr, int len, void (*f)(const T&))
{
	for (int i = 0; i < len; i++)
   		f(arr[i]);
}

#endif