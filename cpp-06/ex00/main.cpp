#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	try
	{
		ScalarConverter::convert(argv[1]);
		(void)argc;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}