/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:23:48 by alexigar          #+#    #+#             */
/*   Updated: 2025/01/03 17:33:52 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	Weapon *weapon;
	std::string name;

	public:
	HumanB(std::string name);
	~HumanB();

	void attack() const;
	void setWeapon(Weapon &weapon);

};

#endif