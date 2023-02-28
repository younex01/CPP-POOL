/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 03:29:34 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/28 03:53:58 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <class T>
class MutantStack : public std::stack<int>
{
    public :
        typedef typename container_type::iterator iterator;
        typedef typename container_type::const_iterator citerator;
        MutantStack(){ }
        MutantStack(const MutantStack & other){
            this = *other;
        }
        ~MutantStack(){}
        MutantStack &operator=(const MutantStack &other){
            this->c  = other.c;
            return (*this);
        }
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
        citerator begin() const
        {
            return (this->c.begin());
        }
        citerator end() const
        {
            return (this->c.end());
        }
};
