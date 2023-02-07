#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
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
	int index = 0;
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
		index++;
	}
}
