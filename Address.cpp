#include "Address.h"

Address::Address(std::string const& street_name, std::string const& city_name, int street_number) 
				: _street_name(street_name),
				  _street_number(street_number),
				  _city_name(city_name)
{
	std::cout << "In the constructor of Address class... " << std::endl;
}

Address::Address(Address const& address)
{
	std::cout << "In the COPY&&&& constructor of Address class... " << std::endl;
}

Address::~Address()
{
	std::cout << "In the destructor of Address class... " << std::endl;
}
