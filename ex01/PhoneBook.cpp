/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:46:50 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/03 15:56:12 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->currentSize = 0;
	this->idx = 0;
};

PhoneBook::~PhoneBook(void)
{
};

static void addField(std::string question, std::string& field)
{
	std::string input;

	std::cout << question;
	std::getline(std::cin, input);
	if (input.length()<=10 && input.length())
		field = input;
	else if (input.length()>10)
		field = input.substr(0,9)+'.';
	else
	{
		std::cout << "EMPTY FIELD NOT ALLOWED\n";
		addField(question, field);
	}
}

void PhoneBook::add()
{
	std::string fname="";
	std::string lname="";
	std::string nname="";
	std::string pnum="";
	std::string dSecret="";
	addField("Enter First Name : ", fname);
	addField("Enter Last Name : ", lname);
	addField("Enter Nickname : ", nname);
	addField("Enter Phone Number : ", pnum);
	addField("Enter Darkset Secret : ", dSecret);
	contacts[idx].setContact(fname, lname, nname, pnum, dSecret);
	idx = (idx + 1) % maxContacts;
	if (currentSize < maxContacts)
		currentSize++;
	std::cout << currentSize;
	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::search()
{
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	//auto is for type inference, which allows compiler to automatically deduce the type of a variable
	for(int i = 0; i < currentSize; i++){
		std::cout << "|"<<std::setw(10) << std::right << i;
		contacts[i].display();
	}
}