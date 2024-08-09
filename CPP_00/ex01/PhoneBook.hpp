/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:20:28 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/09 16:20:29 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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