#pragma once
#include <iostream>
#include "Address.h"

class Person 
{
private:
	std::string _first_name;
	std::string _last_name;
	int _rating;
	Address* _ptr_address;

public:
	Person(std::string const& first_name, std::string const& last_name, int rating,
		std::string const& street_name,
		std::string const& city_name,
		int street_number
	);
	Person(Person const& person);
	~Person();

};
