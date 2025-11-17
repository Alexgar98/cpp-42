/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:54:16 by alexigar          #+#    #+#             */
/*   Updated: 2025/04/16 12:03:33 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	std::cout << "A human called " << this->name << " has been created with the weapon " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "The human called " << this->name << " has been destroyed" << std::endl;
}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}