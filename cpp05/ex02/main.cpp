/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <youness@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:13:38 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/25 18:21:48 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
   try
   {
        Form form("form", 14, 15);
        Bureaucrat burr("Bureau", 13);
        
        form.beSigned(burr);
        burr.signForm(form);
        std::cout << form << std::endl; 
   }
   catch(const std::exception & e)
   {
        std::cerr << e.what() << std::endl;  
   }
   return(0);
}