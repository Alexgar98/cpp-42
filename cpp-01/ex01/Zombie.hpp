/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:45:15 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/31 10:14:58 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	std::string _name;

	public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	std::string getName();
	void setName(const std::string name);

	void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

#endif