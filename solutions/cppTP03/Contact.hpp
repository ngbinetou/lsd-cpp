#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include "Phonebook.cpp" //?? .h ou .c???


class contact
{
	
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;

	
	public:
	contact();
	contact(std::string firstName,std::string lastName,std::string nickName, std::string phoneNumber);

	friend class phonebook;
	
};

#endif