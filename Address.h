#pragma once
#include <iostream>

class Address 
{
private:
	std::string _street_name;  // firstName first-name 
	std::string _city_name;
	int _street_number;

public:
	Address(std::string const& street_name, std::string const& city_name, int street_number );
	Address(Address const& address);
	~Address();
};
