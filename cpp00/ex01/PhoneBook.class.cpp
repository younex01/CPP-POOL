/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:23:33 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/07 08:23:34 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include <sstream>

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}


void	PhoneBook::DisplayAllInfo(int i)
{
		std::cout << "first name :"
				<<_contacts[i].getFirstName()
				<< std::endl;
		std::cout << "last name :"
				<< _contacts[i].getLastName()
				<< std::endl;
		std::cout << "nickname :"
				<< _contacts[i].getNickName()
				<< std::endl;
		std::cout << "phone number :"
				<< _contacts[i].getPhoneNumber()
				<< std::endl;
		std::cout << "darkest secret :"
				<< _contacts[i].getDarkestSecret()
				<< std::endl;
}
void	PhoneBook::Add(void)
{
	Contact New;
	std::string	first_name, last_name,nick_name ,phone_number, darkest_secret;
	static int i = 0;

	while (first_name.empty())
	{
		std::cout << "first name :";
		if(!std::getline(std::cin, first_name))
			exit (1);
	}
	New.setFirstName(first_name);
	while (last_name.empty())
	{
		std::cout << "last name :";
		if(!std::getline(std::cin, last_name))
			exit (1);
	}
	New.setLastName(last_name);
	while (nick_name.empty())
	{
		std::cout << "nickname :";
		if(!std::getline(std::cin, nick_name))
			exit (1);
	}
	New.setNickName(nick_name);
	while (phone_number.empty())
	{
		std::cout << "phone number :";
		if(!std::getline(std::cin, phone_number))
			exit (1);
	}
	New.setPhoneNumber(phone_number);
	while (darkest_secret.empty())
	{
		std::cout << "darkest secret :";
		if(!std::getline(std::cin, darkest_secret))
			exit (1);
	}
	std::cout << std::endl;
	New.setDarkestSecret(darkest_secret);
	_contacts[i] = New;
	i++;
	if (i == 8)
		i = 0;
}

void	PhoneBook::DisplayFN(int i)
{
	if(_contacts[i].getFirstName().size() <= 10)
	{
		std::cout << std::setw(10)
				<< _contacts[i].getFirstName()
				<< "|";
	}
	else
	{
		std::cout << std::setw(9)
				<< _contacts[i].getFirstName().substr(0, 9)
				<< ".|";
	}
}

void	PhoneBook::DisplayLN(int i)
{
	if(_contacts[i].getLastName().size() <= 10)
	{
		std::cout << std::setw(10)
				<< _contacts[i].getLastName()
				<< "|";
	}
	else
	{
		std::cout << std::setw(9)
				 << _contacts[i].getLastName().substr(0, 9)
				 << ".|";
	}
}

void	PhoneBook::DisplayNN(int i)
{
	if(_contacts[i].getNickName().size() <= 10)
	{
		std::cout << std::setw(10)
				<< _contacts[i].getNickName()
				<< "|";
	}
	else
	{
		std::cout << std::setw(9)
				 << _contacts[i].getNickName().substr(0, 9)
				 << ".|";
	}
}

void	PhoneBook::Search()
{
	int nb, index = 0;
	std::string i;
	if(_contacts[0].getFirstName().empty())
	{
		std::cout << "NO CONTACT IS ADDED"; std::cout << std::endl;
		return;
	}
	while(index < 8)
	{
		if (index == 0)
		{
			std::cout << std::setw(10);
			std::cout << "index";
			std::cout << "|";
			std::cout << std::setw(10);
			std::cout << "first name";
			std::cout << "|";
			std::cout << std::setw(10);
			std::cout << "last name";
			std::cout << "|";
			std::cout << std::setw(10);
			std::cout << "nickname";
			std::cout << "|";
			std::cout << std::endl;
		}
		if(!_contacts[index].getFirstName().empty())
		{
			std::cout << std::setw(10);
			std::cout << index;
			std::cout << "|";
			PhoneBook::DisplayFN(index);
			PhoneBook::DisplayLN(index);
			PhoneBook::DisplayNN(index);
			std::cout << std::endl;
		}
		break;
		index++;
	}
	if (!_contacts[0].getFirstName().empty())
	{
		while(i.empty())
		{
			std::cout << "Enter the index of the contact you want to display :";
			if(!std::getline(std::cin, i))
				exit (1);
		}
		std::cout << std::endl;
		std::istringstream(i) >> nb;
		if (nb >= 0 && nb <= index)
			PhoneBook::DisplayAllInfo(nb);
		else
			std::cout << "\t\tsorry contact not found !!\n";
	}
}
