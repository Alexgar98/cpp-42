/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:29:55 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/30 10:29:57 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	std::string input;
	PhoneBook phonebook = PhoneBook();
	while (1)
	{
		std::cout << "Welcome to da most awesome phonebook! nwn" << std::endl;
		std::cout << "Senpai, ya wanna ADD a contact, SEARCH a contact or EXIT?" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "'Kay baaai~ nwn" << std::endl;
			return (0);
		}
		else
			std::cout << "Wha's dat? ó.o" << std::endl;
	}
	return (0);
}