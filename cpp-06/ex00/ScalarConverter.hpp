#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <stdlib.h>
# include <cstring>
# include <cstdlib>
# include <climits>

class ScalarConverter
{
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(const ScalarConverter &other);
	~ScalarConverter();
	public:
	static void convert(std::string lit);

	class ImpossibleConversionException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Could not convert from this input");
		}
	};
};

#endif