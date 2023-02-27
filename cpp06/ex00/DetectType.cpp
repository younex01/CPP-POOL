/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:51:21 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 04:46:33 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DetectType.hpp"

DetectType::DetectType()
{
}

DetectType::~DetectType()
{
}

DetectType::DetectType(DetectType const &other)
{
    *this = other;
}

DetectType &DetectType::operator=(DetectType const &other)
{
    (void)other;
    return (*this);
}

bool DetectType::is_char(std::string str)
{
    if (!str[1] && !isdigit(str[0]) && str[0] >= 32 && str[0] <= 126)
		return (1);
	return (0);
}

bool DetectType::is_int(std::string str)
{
	int	check = 0;
	
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '-' || str[i] == '+')
			check++;
	}
	return str.find_first_not_of("-+0123456789") == std::string::npos && check <= 1; 
}

bool DetectType::is_float(std::string str)
{
	int	check_point = 0;
	int	check_sign = 0;
	int i;
	
	if (str[0] == '.')
		return false;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			check_point++;
		if (str[i] == '-' || str[i] == '+')
			check_sign++;
	}
	return str.find_first_not_of("-+0123456789.f") == std::string::npos && (str.back() == 'f' && isdigit(str[i - 2]))
		&& check_point <= 1 && check_sign <= 1;
}

bool DetectType::is_double(std::string str)
{
	int	check_point = 0;
	int	check_sign = 0;
	
	if (str[0] == '.')
		return false;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			check_point++;
		if (str[i] == '-' || str[i] == '+')
			check_sign++;
	}
	return str.find_first_not_of("-+0123456789.") == std::string::npos
		&& check_point <= 1 && check_sign <= 1;
}