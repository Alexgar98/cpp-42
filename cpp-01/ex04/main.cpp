/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexigar <alexigar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:41:41 by alexigar          #+#    #+#             */
/*   Updated: 2025/04/17 12:40:25 by alexigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid arguments" << std::endl;
		return (1);
	}
	std::ifstream file(argv[1]);
	if (!file || !file.is_open())
	{
		std::cout << "Could not open file" << std::endl;
		return (1);
	}
	std::string originalFileName = argv[1];
	std::string outfileName = originalFileName + ".replace";
	std::ofstream outfile(outfileName.c_str());
	std::string line;
	std::string content;
	bool first_line = true;
	while (std::getline(file, line))
	{
		if (!first_line)
		{
			content = content + "\n";
		}
		content = content + line;
		first_line = false;
	}
	if (line.length() == 0)
		content = content + "\n";
	std::string to_replace = argv[2];
	if (to_replace.length() == 0)
	{
		std::cout << "Could not replace anything" << std::endl;
		outfile << content;
		return (0);
	}
	size_t pos = content.find(argv[2]);
	size_t prev = 0;
	while (pos != content.npos)
	{
		outfile << content.substr(prev, pos - prev);
		outfile << argv[3];
		prev = pos + to_replace.length();
		pos = content.find(argv[2], prev);
	}
	outfile << content.substr(prev);
	outfile.close();
	return (0);
}