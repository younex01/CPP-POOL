#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include "Contact.class.hpp"


class PhoneBook
{
private:
	Contact _contacts[8];
public:
	PhoneBook(/* args */);
	~PhoneBook();
};



#endif