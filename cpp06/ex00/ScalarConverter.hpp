/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 01:09:00 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 05:04:28 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include "DetectType.hpp"
#include "PrintMsg.hpp"

class ScalarConverter
{
private:
	
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &);
	~ScalarConverter();
	ScalarConverter &operator=(ScalarConverter const &);
	static void convert(std::string str);
};

#endif