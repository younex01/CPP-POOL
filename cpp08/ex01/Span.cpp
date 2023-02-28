/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 02:32:15 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/28 04:41:09 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(50)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::~Span()
{
}

Span::Span(const Span &span)
{
    *this = span;
}

const Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->_v = other._v;
        this->_N = other._N;
    }
    return (*this);
}

void Span::addNumber(int n)
{
    if(_v.size() == _N)
        throw std::out_of_range("the span is full");
    _v.push_back(n);
}

int Span::shortestSpan()
{
    std::vector<int> v(_v), res;
    std::vector<int>::iterator iter, tmp;
    std::sort(v.begin(), v.end());
    iter = v.begin();
    tmp = iter;
    iter++;
    while(iter != v.end())
    {
        res.push_back(std::abs(*iter - *tmp));
        iter++;
        tmp++;
    }
    if (res.size() == 0)
        return (0);
    return (*std::min_element(res.begin(), res.end()));
}

int Span::longestSpan()
{
    std::vector<int>::iterator max, min;
    max = std::max_element(_v.begin(), _v.end());
    min = std::min_element(_v.begin(), _v.end());
    return(std::abs(*max - *min));
}