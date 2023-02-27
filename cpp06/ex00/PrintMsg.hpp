/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintMsg.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 04:27:51 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 04:56:45 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTMSG_HPP
#define PRINTMSG_HPP

#include <iostream>
#include <iomanip>

class PrintMsg
{
private:
    
public:
    PrintMsg();
    ~PrintMsg();
    PrintMsg(PrintMsg const &other);
    PrintMsg &operator=(PrintMsg const &other);
    static void ForChar(std::string str);
    static void ForInt(std::string str);
    static void ForFloat(std::string str);
    static void ForDouble(std::string str);
};

#endif