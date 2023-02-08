/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:23:22 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/08 08:13:22 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string	Contact::getFirstName(void) const
{
	return this->_fs_name;
}

void	Contact::setFirstName(std::string str)
{
	if(!str.empty())
		this->_fs_name = str;
	return;
}

std::string	Contact::getLastName(void) const
{
	return this->_ls_name;
}

void	Contact::setLastName(std::string str)
{
	if(!str.empty())
		this->_ls_name = str;
	return;
}

std::string	Contact::getNickName(void) const
{
	return this->_nick_name;
}
void	Contact::setNickName(std::string str)
{
	if(!str.empty())
		this->_nick_name = str;
	return;
}

std::string	Contact::getPhoneNumber(void) const
{
	return this->_ph_nbr;
}

void	Contact::setPhoneNumber(std::string str)
{
	if(!str.empty())
		this->_ph_nbr = str;
	return;
}

std::string	Contact::getDarkestSecret(void) const
{
	return this->_dk_secret;
}

void	Contact::setDarkestSecret(std::string str)
{
	if(!str.empty())
		this->_dk_secret = str;
	return;
}