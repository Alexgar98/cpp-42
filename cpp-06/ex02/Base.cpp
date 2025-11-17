#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	return;
}

Base *generate(void)
{
	srand(time(0));
	int nbr = rand();
	if (nbr % 3 == 0)
	{
		std::cout << "Creating A type" << std::endl;
		return (new A());
	}
	else if (nbr % 3 == 1)
	{
		std::cout << "Creating B type" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "Creating C type" << std::endl;
		return (new C());
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "Type A pointer" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "Type B pointer" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "Type C pointer" << std::endl;
		return;
	}
}

void identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Type A reference" << std::endl;
		(void)a;
		return;
	}
	catch (std::exception &e) {}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Type B reference" << std::endl;
		(void)b;
		return;
	}
	catch (std::exception &e) {}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Type C reference" << std::endl;
		(void)c;
		return;
	}
	catch (std::exception &e) {}
}