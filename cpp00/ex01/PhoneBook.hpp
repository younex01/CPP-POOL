/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:23:38 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/08 08:12:58 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"


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