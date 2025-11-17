/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:30:01 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/30 10:30:02 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	//Class variables, private by default
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

	//public stuff
	public:

	Contact(); //constructor
	~Contact(); //destructor

	//setters
	void setFirstName(const std::string firstName);
	void setLastName(const std::string lastName);
	void setNickname(const std::string nickname);
	void setPhoneNumber(const std::string phoneNumber);
	void setDarkestSecret(const std::string darkestSecret);

	//getters
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};

#endif