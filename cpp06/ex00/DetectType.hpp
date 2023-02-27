/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:46:43 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 04:18:06 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECTTYPE_HPP
#define DETECTTYPE_HPP

#include <iostream>

class DetectType
{
private:

public:
    DetectType();
    DetectType(DetectType const &other);
    ~DetectType();
    DetectType &operator=(DetectType const &other);

    static bool is_char(std::string str);
    static bool is_int(std::string str);
    static bool is_float(std::string str);
    static bool is_double(std::string str);
};

#endif