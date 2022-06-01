#pragma once
using namespace std;

class Person
{
	std::string _name;
	std::string _surname;
	std::string _patronimyc;
public:
	Person();
	std::string _name();
	Person(const std::string Name, const std::string Surname, const std::string Patronimyc);
};

