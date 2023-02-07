/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:23:38 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/07 08:23:39 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include "Contact.class.hpp"
#include "cstring"
#include "iomanip"


class PhoneBook
{
private:
	Contact _contacts[8];
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	Add(void);
	void	Search(void);
	void	DisplayFN(int i);
	void	DisplayLN(int i);
	void	DisplayNN(int i);
	void	DisplayAllInfo(int i);
};



#endif