#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
	return;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

bool isChar(std::string lit)
{
	if (lit[0] >= '0' && lit[0] <= '9')
		return false;
	return true;
}

bool isInt(std::string lit)
{
	for (int i = 0; lit[i]; i++)
	{
		if (i == 0)
		{
			if (lit[i] < '0' || lit[i] > '9')
			{
				if (lit[i] != '-' && lit[i] != '+')
					return false;
			}
		}
		else
		{
			if (lit[i] < '0' || lit[i] > '9')
				return false;
		}
	}
	return true;
}

bool isFloat(std::string lit)
{
	int points = 0;

	for (int i = 0; lit[i]; i++)
	{
		if (i == 0)
		{
			if (lit[i] < '0' || lit[i] > '9')
			{
				if (lit[i] != '-' && lit[i] != '+')
					return false;
			}
		}
		else if (!lit[i + 1])
		{
			if (lit[i] != 'f')
				return false;
		}
		else
		{
			if (lit[i] < '0' || lit[i] > '9')
			{
				if (lit[i] == '.')
					points++;
			}
		}
	}
	return (points == 1);
}

bool isDouble(std::string lit)
{
	int points = 0;

	for (int i = 0; lit[i]; i++)
	{
		if (i == 0)
		{
			if (lit[i] < '0' || lit[i] > '9')
			{
				if (lit[i] != '-' && lit[i] != '+')
					return false;
			}
		}
		else
		{
			if (lit[i] < '0' || lit[i] > '9')
			{
				if (lit[i] == '.')
					points++;
			}
		}
	}
	return (points == 1);
}

char toChar(std::string lit)
{
	return (lit[0]);
}

long toInt(std::string lit)
{
	long to_return = 0;
	bool negative = false;
	int i = 0;
	if (lit[i] == '-')
	{
		negative = true;
		i++;
	}
	while (lit[i])
	{
		to_return *= 10;
		to_return += (lit[i] - '0');
		i++;
	}
	if (negative)
		to_return = -to_return;
	return (to_return);
}

float toFloat(std::string lit)
{
	float to_return = 0.0f;
	bool negative = false;
	int i = 0;
	int factor = 10;
	if (lit[i] == '-')
	{
		negative = true;
		i++;
	}
	while (lit[i] != '.' && lit[i] != 'f')
	{
		to_return *= 10;
		to_return += (lit[i] - '0');
		i++;
	}
	if (lit[i] == '.')
		i++;
	while (lit[i] != 'f')
	{
		to_return += ((lit[i] - '0') / factor);
		factor *= 10;
		i++;
	}
	if (negative)
		to_return = -to_return;
	return (to_return);
}

double toDouble(std::string lit)
{
	double to_return = 0.0;
	bool negative = false;
	int i = 0;
	int factor = 10;
	if (lit[i] == '-')
	{
		negative = true;
		i++;
	}
	while (lit[i] != '.')
	{
		to_return *= 10;
		to_return += (lit[i] - '0');
		i++;
	}
	if (lit[i] == '.')
		i++;
	while (lit[i])
	{
		to_return += ((lit[i] - '0') / factor);
		factor *= 10;
		i++;
	}
	if (negative)
		to_return = -to_return;
	return (to_return);
}

void ScalarConverter::convert(std::string lit)
{
	char character;
	int integer;
	float floating;
	double doubling;

	if (lit == "-inff" || lit == "+inff" || lit == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << lit << std::endl;
		std::cout << "double: " << lit.substr(0, lit.size() - 1) << std::endl;
		return;
	}
	if (lit == "-inf" || lit == "+inf" || lit == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << lit << "f" << std::endl;
		std::cout << "double: " << lit << std::endl;
		return;
	}
	if (isInt(lit))
	{
		if (toInt(lit) < INT_MIN || toInt(lit) > INT_MAX)
			throw ScalarConverter::ImpossibleConversionException();
		integer = toInt(lit);
		character = (char)integer;
		floating = (float)integer;
		doubling = (double)integer;
	}
	else if (isFloat(lit))
	{
		floating = atof(lit.c_str());
		character = static_cast<char>(floating);
		integer = static_cast<int>(floating);
		doubling = (double)floating;
	}
	else if (isDouble(lit))
	{
		doubling = atof(lit.c_str());
		character = static_cast<char>(doubling);
		integer = static_cast<int>(doubling);
		floating = static_cast<float>(doubling);
	}
	else if (isChar(lit))
	{
		if (lit.size() > 1)
		{
			throw ScalarConverter::ImpossibleConversionException();
		}
		character = toChar(lit);
		integer = (int)character;
		floating = (float)character;
		doubling = (double)character;
	}
	else
	{
		throw ScalarConverter::ImpossibleConversionException();
	}
	if (integer < 32 || integer > 126 || floating - integer != 0.0f)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << character << "'" << std::endl;
	std::cout << "int: " << integer << std::endl;
	std::cout << "float: " << floating;
	if (floating - integer == 0.0f)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << doubling;
	if (doubling - integer == 0.0)
		std::cout << ".0";
	std::cout << std::endl;
}