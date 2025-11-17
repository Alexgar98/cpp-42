/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:49:04 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/31 10:26:38 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "A zombie has been created!!!" << std::endl;

	return;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "A zombie has been created!!!" << std::endl;

	return;
}

Zombie::~Zombie()
{
	std::cout << "A zombie called " << this->_name << " has been destroyed" << std::endl;
}

std::string Zombie::getName()
{
	return (this->_name);
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}