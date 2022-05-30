#pragma once
#include<iostream>
#include<string>

class coach
{
	std::string name;
	std::string surname;
	std::string group_num;
public:
	coach(const char* nm, const char* thr, const char* grp);
	std::string get_name();
	std::string get_surname();
	bool equal(const coach bk);
	friend std::ostream& operator<<(std::ostream& os, const coach& bk);
};
