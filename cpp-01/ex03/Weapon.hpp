/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:40:55 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/31 11:32:15 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	std::string type;

	public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string &getType() const;
	void setType(std::string type);
};

#endif