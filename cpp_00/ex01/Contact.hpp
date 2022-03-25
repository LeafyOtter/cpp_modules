#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__


#include <string>

class Contact {
	public:
	void	getInput();
	void	print();
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

#endif