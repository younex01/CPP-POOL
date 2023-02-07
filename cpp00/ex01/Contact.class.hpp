#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>

class Contact
{
private:
	std::string _fs_name;
	std::string	_ls_name;
	std::string _nick_name;
	std::string	_ph_nbr;
	std::string	_dk_secret;
public:
	Contact(void);
	~Contact(void);
	std::string	getFirstName(void) const;
	void	setFirstName(std::string str);
	std::string	getLastName(void) const;
	void	setLastName(std::string str);
	std::string	getNickName(void) const;
	void	setNickName(std::string str);
	std::string	getPhoneNumber(void) const;
	void	setPhoneNumber(std::string str);
	std::string	getDarkestSecret(void) const;
	void	setDarkestSecret(std::string str);
};


#endif