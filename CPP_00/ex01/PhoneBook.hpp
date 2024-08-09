#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
	static const int maxContacts = 8;
	Contact contacts[maxContacts];
	int currentSize;
	int idx;
public:
	PhoneBook(void);
	~PhoneBook(void);
	void add();
	void search();
};

#endif