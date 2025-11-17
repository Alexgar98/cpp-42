/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:30:06 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/30 10:30:08 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "You've made a contact! :D" << std::endl;

	return;
}

Contact::~Contact()
{
	std::cout << "You've destroyed a contact :'(" << std::endl;

	return;
}

//setters
void Contact::setFirstName(const std::string firstName)
{
	this->_firstName = firstName;
}
void Contact::setLastName(const std::string lastName)
{
	this->_lastName = lastName;
}
void Contact::setNickname(const std::string nickname)
{
	this->_nickname = nickname;
}
void Contact::setPhoneNumber(const std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(const std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

//getters
std::string Contact::getFirstName()
{
	return (_firstName);
}
std::string Contact::getLastName()
{
	return (_lastName);
}
std::string Contact::getNickname()
{
	return (_nickname);
}
std::string Contact::getPhoneNumber()
{
	return (_phoneNumber);
}
std::string Contact::getDarkestSecret()
{
	return (_darkestSecret);
}