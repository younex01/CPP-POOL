/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 02:11:58 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/28 02:29:53 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <class T>
int easyfind(T container, int value)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return (*it);
}


#endif