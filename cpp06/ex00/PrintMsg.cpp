/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintMsg.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 04:27:48 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 16:37:20 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PrintMsg.hpp"

PrintMsg::PrintMsg()
{
}

PrintMsg::~PrintMsg()
{
}

PrintMsg::PrintMsg(PrintMsg const &other)
{
    *this = other;
}
PrintMsg &PrintMsg::operator=(PrintMsg const &other)
{
    (void)other;
    return (*this);
}

void PrintMsg::ForChar(std::string str)
{
    char	c;
    int		n;
	float	f;
	double	d;

    c = str[0];
    std::cout << "Char: '" << c << "'" << std::endl;
    n = static_cast<int>(c);
    std::cout << "int: " << n << std::endl;
    f = static_cast<float>(c);
    std::cout << "float: " << f << "f" << std::endl;
    d = static_cast<double>(c);
    std::cout << "double: " << d << std::endl;

}

void PrintMsg::ForInt(std::string str)
{
    char	c;
	int		n;
	float	f;
	double	d;
    
    long	l = std::stol(str);
    if (l > INT_MAX || l < INT_MIN)
        throw "Unknown type";
    std::cout << std::fixed << std::setprecision(1);
    n = std::stoi(str);
    if ((n >= 32 && n <= 126))
    {
        c = static_cast<char>(n);
        std::cout << "Char: '" << c << "'" << std::endl;
    }
    else
        std::cout << "Char: Non displayable" << std::endl;
    std::cout << "int: " << n << std::endl;
    f = static_cast<float>(n);
    std::cout << "float: " << f << "f" << std::endl;
    d = static_cast<double>(n);
    std::cout << "double: " << d << std::endl;
    
}
void PrintMsg::ForFloat(std::string str)
{
    char	c;
	int		n;
	float	f;
	double	d;
    
    std::cout << std::fixed << std::setprecision(1);
    f = std::stof(str);
    if ((f >= 32 && f <= 126))
    {
        c = static_cast<char>(f);
        std::cout << "Char: '" << c << "'" << std::endl;
    }
    else
        std::cout << "Char: Non displayable" << std::endl;
    n = static_cast<int>(f);
    std::cout << "int: " << n << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    d = static_cast<double>(f);
    std::cout << "double: " << d << std::endl;
}

void PrintMsg::ForDouble(std::string str)
{
    char	c;
	int		n;
	float	f;
	double	d;
    
    std::cout << std::fixed << std::setprecision(1);
    d = std::stod(str);
    if ((d >= 32 && d <= 126))
    {
        c = static_cast<char>(d);
        std::cout << "Char: '" << c << "'" << std::endl;
    }
    else
        std::cout << "Char: Non displayable" << std::endl;
    n = static_cast<int>(d);
    std::cout << "int: " << n << std::endl;
    f = static_cast<float>(d);
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}