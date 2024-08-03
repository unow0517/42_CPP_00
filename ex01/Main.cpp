/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:46:53 by yowoo             #+#    #+#             */
/*   Updated: 2024/08/03 16:00:48 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

// void addField(std::string question, string& field);

int main(void)
{
	std::string exit="EXIT";

	PhoneBook phonebook;
	std::string inpt;

	while (inpt != "EXIT")
	{
		std::cout << "ENTER A COMMAND > ";
		std::getline(std::cin, inpt);
		if (inpt == "ADD")
			phonebook.add();
		else if (inpt == "SEARCH")
			phonebook.search();
	}
	if (inpt == "EXIT")
		return (1);
	return (0);
}

