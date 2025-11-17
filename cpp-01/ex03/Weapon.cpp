/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:44:53 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/31 11:31:38 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "A weapon called " << this->type << " has been created" << std::endl;
	return;
}

Weapon::~Weapon()
{
	std::cout << "A weapon called " << this->type << " has been destroyed" << std::endl;
	return;
}

const std::string &Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}