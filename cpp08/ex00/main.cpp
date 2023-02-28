/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 02:23:39 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/28 02:30:07 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(32);
    try{
    int val = easyfind(v, 1);
    std::cout << val << std::endl;
    }catch(const std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
}