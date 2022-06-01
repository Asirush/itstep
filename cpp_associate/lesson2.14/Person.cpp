#include "Person.h"
#include <iostream>

Person::Person()
{
	_name = "";
	_surname = "";
	_patronimyc = "";
}

std::string Person::_name()
{
	return _name;
}

Person::Person(const std::string Name, const std::string Surname, const std::string Patronimyc)
{
		_name = Name;
		_surname = Surname;
		_patronimyc = Patronimyc;
}


