/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:56:25 by alexigar          #+#    #+#             */
/*   Updated: 2025/04/16 11:58:40 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int quantity = 5;
	Zombie *horde = zombieHorde(quantity, "Pepe");
	for (int i = 0; i < quantity; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}