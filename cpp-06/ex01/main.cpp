#include "Serializer.hpp"

int main(void)
{
	Data d;
	Data *deserialized;

	d.potato = 4;
	d.alioli = 'a';

	std::cout << d.potato << std::endl;
	std::cout << d.alioli << std::endl;
	std::cout << &d << std::endl;

	uintptr_t serialized = Serializer::serialize(&d);
	std::cout << serialized << std::endl;

	deserialized = Serializer::deserialize(serialized);
	std::cout << deserialized->potato << std::endl;
	std::cout << deserialized->alioli << std::endl;
	std::cout << deserialized << std::endl;
}