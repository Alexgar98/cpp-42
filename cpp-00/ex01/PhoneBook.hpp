/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:29:38 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/30 10:29:41 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <stdlib.h>

class PhoneBook
{
	Contact _contacts[8];
	int _nbrContacts;

	public:

	PhoneBook();
	~PhoneBook();

	void addContact(void);
	void searchContact(void);
	int getNbrContacts();
	void setNbrContacts(int nbrContacts);
};

#endif