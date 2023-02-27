/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 05:14:03 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 05:50:18 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <iostream>
#include "Data.hpp"

class Serializer
{
private:
    
public:
    Serializer();
    Serializer(Serializer const &other);
    ~Serializer();
    Serializer &operator=(const Serializer &other);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};



#endif