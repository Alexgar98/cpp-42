/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:50:36 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/31 11:34:08 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	Weapon &weapon;
	std::string name;

	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack() const;

};

#endif