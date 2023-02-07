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
};



#endif