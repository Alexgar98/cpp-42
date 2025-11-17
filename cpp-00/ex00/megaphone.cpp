/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:30:11 by alexigar          #+#    #+#             */
/*   Updated: 2024/12/30 10:30:11 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		int i = 1;
		int j = 0;
		while (i < argc)
		{
			while (argv[i][j])
			{
				std::cout << (char) std::toupper(argv[i][j]);
				j++;
			}
			i++;
			j = 0;
		}
	}
	std::cout << std::endl;
}