/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:20:20 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/09 16:20:21 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip> //For std::setw and std::setright

class Contact {
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darksetSecret;
public:
	Contact(void);
	~Contact(void);

	std::string getfName() const;
	std::string getlName() const;
	std::string getnname() const;
	std::string getpNumber() const;
	std::string getdsSecret() const;

	void setContact(const std::string& fname, const std::string& lname, const std::string& nname, const std::string& pnum, const std::string& dSecret );
	void display() const;
};

#endif