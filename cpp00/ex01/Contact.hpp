/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 08:23:27 by yelousse          #+#    #+#             */
/*   Updated: 2023/02/08 08:13:19 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
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