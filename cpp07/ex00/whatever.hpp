/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:19:07 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 19:27:05 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b)
{
    return (a <= b? a : b);
}

template<typename T>
T	max(T a, T b)
{
    return (a >= b? a : b);
}

#endif