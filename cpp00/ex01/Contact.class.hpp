#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>

class Contact
{
private:
	std::string _fs_name;
	std::string	_ls_name;
	int			_age;
public:
	Contact();
	~Contact();
};


#endif