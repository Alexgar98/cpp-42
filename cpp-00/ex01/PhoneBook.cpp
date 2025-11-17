/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:29:33 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/30 10:29:36 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "You've created a phonebook :D" << std::endl;
	this->_nbrContacts = 0;

	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "You've destroyed a phonebook :'(" << std::endl;

	return;
}

void PhoneBook::addContact(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Gimme the first name uwu" << std::endl;
	std::getline(std::cin, firstName);
	while (firstName.length() == 0)
	{
		std::cout << "That's not valid! You MUST introduce something, baka~!" << std::endl;
		std::getline(std::cin, firstName);
	}

	std::cout << "Gimme the last name uwu" << std::endl;
	std::getline(std::cin, lastName);
	while (lastName.length() == 0)
	{
		std::cout << "That's not valid! You MUST introduce something, baka~!" << std::endl;
		std::getline(std::cin, lastName);
	}

	std::cout << "Gimme the nickname uwu" << std::endl;
	std::getline(std::cin, nickname);
	while (nickname.length() == 0)
	{
		std::cout << "That's not valid! I'm not calling them by their name! ùwú" << std::endl;
		std::getline(std::cin, nickname);
	}

	std::cout << "Gimme the phone number. It's not like I'm going to call them everyday on your behalf uwú" << std::endl;
	std::getline(std::cin, phoneNumber);
	while(phoneNumber.length() == 0)
	{
		std::cout << "Do you really want me to save a null numbah?! o.ó" << std::endl;
		std::getline(std::cin, phoneNumber);
	}

	std::cout << "Tell me the darkest secret. I will keep it as a secret, I swear! owo" << std::endl;
	std::getline(std::cin, darkestSecret);
	while (darkestSecret.length() == 0)
	{
		std::cout << "So unfair! I wanna know the darkest secret! qwq" << std::endl;
		std::getline(std::cin, darkestSecret);
	}

	Contact newContact = Contact();
	newContact.setFirstName(firstName);
	newContact.setLastName(lastName);
	newContact.setNickname(nickname);
	newContact.setPhoneNumber(phoneNumber);
	newContact.setDarkestSecret(darkestSecret);

	for (int i = 6; i >= 0; i--)
	{
		this->_contacts[i + 1] = this->_contacts[i];
	}
	this->_contacts[0] = newContact;
	if (this->_nbrContacts < 8)
		this->_nbrContacts++;
}

void PhoneBook::searchContact(void)
{
	if (this->_nbrContacts == 0)
		std::cout << "Ya list is empty! o.o" << std::endl;
	else
	{
		std::cout << "|     Index|First name| Last name|  Nickname|"<< std::endl;
		for (int i = 0; i < 8; i++)
		{
			if (i == this->_nbrContacts)
				break;
			std::string firstName = this->_contacts[i].getFirstName();
			std::string lastName = this->_contacts[i].getLastName();
			std::string nickname = this->_contacts[i].getNickname();
			if (firstName.length() > 10)
				firstName = firstName.substr(0, 9) + '.';
			while (firstName.length() != 10)
				firstName = ' ' + firstName;
			if (lastName.length() > 10)
				lastName = lastName.substr(0, 9) + '.';
			while (lastName.length() != 10)
				lastName = ' ' + lastName;
			if (nickname.length() > 10)
				nickname = nickname.substr(0, 9) + '.';
			while (nickname.length() != 10)
				nickname = ' ' + nickname;
			std::cout << "|         " << i << "|" << firstName << "|" << lastName << "|" << nickname << "|" << std::endl;
		}
		std::cout << "----------------------------------" << std::endl;
		std::cout << "What contact you wanna see? nwn" << std::endl;
		std::string entry;
		std::getline(std::cin, entry);
		int index = atoi(entry.c_str());
		while (index < 0 || index >= this->_nbrContacts || (index == 0 && entry[0] != '0'))
		{
			std::cout << "Dis doesn't exist, baka~!" << std::endl;
			std::getline(std::cin, entry);
			index = atoi(entry.c_str());
		}
		std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
		std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
	}
}

int PhoneBook::getNbrContacts()
{
	return (_nbrContacts);
}

void PhoneBook::setNbrContacts(int nbrContacts)
{
	this->_nbrContacts = nbrContacts;
}