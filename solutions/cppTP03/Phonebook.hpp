#ifndef PHONEBOOK_HPP
#define PHONEBOKK_HPP

#include <string>
#include "Contact.cpp" //le .h ou le .c??? 


class phonebook
{


	contact LesContacts [8]{};
	int index;
	
	public:

	phonebook();


	void ADD();
	

	void search();
	

};


#endif
