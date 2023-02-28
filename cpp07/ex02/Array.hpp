/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:06:15 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/27 21:58:24 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:
        T *_arr;
        int _size;
        
    public:
        Array()
        {
            std::cout << "Array Default Constructor." << std::endl;
            _arr = new T(0);
            _size = 0;
        }
        Array(unsigned int n)
        {
            std::cout << "Array with n parameter." << std::endl; 
            _arr = new T[n];
            for(unsigned int i = 0; i < n; i++)
                _arr[i] = i;
            _size = n;
        }
        Array(Array const & src)
        {
            std::cout << "Array copy cnstructor" << std::endl;
            _arr = new T[src.size()];
            *this = src;
        }
        Array & operator=(Array const & obj)
        {
            std::cout << "Array assignment operator called" << std::endl;

            delete [] _arr;
            _arr = new T[obj.size()];
            _size = obj.size();
            for (int i = 0; i < _size; i++)
                _arr[i] = obj._arr[i];
            return (*this);
        }
        ~Array()
        {
            std::cout << "Array Deconstructor!" << std::endl;
            delete [] _arr;
        }

        T & operator[](int index)
        {
            if (index >= _size || index < 0)
                throw (std::out_of_range("Index out of bounds"));
            return _arr[index];
        }
        
        T const & operator[](int index) const
        {
            if (index >= _size || index < 0)
                throw (std::out_of_range("Index out of bounds"));
            return _arr[index];
        }

        int size() const
        {
            return (_size);
        }
        
};


#endif