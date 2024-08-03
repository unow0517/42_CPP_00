/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:34:40 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/03 15:44:43 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
	
Contact::Contact(void)
{
};

Contact::~Contact(void)
{
};

void Contact::setContact(const std::string& fname, const std::string& lname, const std::string& nname, const std::string& pnum, const std::string& dSecret ){
	this->firstName = fname;
	this->lastName = lname;
	this->nickname= nname;
	this->phoneNumber = pnum;
	this->darksetSecret = dSecret;
}

std::string Contact::getfName() const 
{
	return firstName;
}

std::string Contact::getlName() const 
{
	return lastName;
}

std::string Contact::getnname() const 
{
	return nickname;
}

std::string Contact::getpNumber() const 
{
	return phoneNumber;
}

std::string Contact::getdsSecret() const 
{
	return darksetSecret;
}

void Contact::display() const 
{
		std::cout << "|"<<std::setw(10) << std::right << getfName();
		std::cout << "|"<<std::setw(10) << std::right << getlName();
		std::cout << "|"<<std::setw(10) << std::right << getnname();
		std::cout << "|"<<std::endl;
}