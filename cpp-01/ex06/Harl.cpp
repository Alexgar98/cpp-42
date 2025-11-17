/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 19:24:03 by alexigar          #+#    #+#             */
/*   Updated: 2025/04/16 12:26:06 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl has come" << std::endl;
	return;
}

Harl::~Harl()
{
	std::cout << "Harl is gone" << std::endl;
	return;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string cleanLevel = level;
	for (size_t i = 0; i < cleanLevel.length(); ++i) {
        cleanLevel[i] = std::tolower(cleanLevel[i]);
    }
	std::string warningLevel[4] = {"debug", "info", "warning", "error"};
	void (Harl::*function)(void) = NULL;
	void (Harl::*functionArray[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	while (i < 4)
	{
		if (cleanLevel == warningLevel[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			function = functionArray[0];
			(this->*function)();
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			function = functionArray[1];
			(this->*function)();
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			function = functionArray[2];
			(this->*function)();
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			function = functionArray[3];
			(this->*function)();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}