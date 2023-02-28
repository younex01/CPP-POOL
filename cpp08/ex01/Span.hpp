/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 02:32:19 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/28 04:53:27 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
private:
   unsigned int _N;
   std::vector<int> _v;

public:
    Span();
    Span(unsigned int N);
    ~Span();
    Span(const Span &span);
    const Span &operator=(const Span &other);
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();

    template <class IT>
    void addNumber(IT begin, IT end)
    {
        size_t dest = end - begin;
        if(dest + _v.size() > _N)
            throw std::out_of_range("to big rang");
        _v.insert(_v.end(), begin, end);
    }
};

#endif