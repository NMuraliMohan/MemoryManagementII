#include "Person.h"

Person::Person(std::string const& first_name, std::string const& last_name, int rating, 
				std::string const& street_name, std::string const& city_name, int street_number)
			:	_first_name(first_name),
				_last_name(last_name),
				_rating(rating),
				_ptr_address(new Address(street_name, city_name, street_number))
{
	std::cout << "In the constructor of Person class... " << std::endl;
}

Person::Person(Person const& person)
{
}

Person::~Person()
{
	std::cout << "In the destructor of Person class... " << std::endl;
	delete _ptr_address;
}
