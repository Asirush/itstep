#pragma once
#include<iostream>
#include<string>

class student
{
	std::string name;
	std::string surname;
	std::string group_num;
public:
	student(const char* nm, const char* thr, const char* grp);
	std::string get_name();
	std::string get_surname();
	bool equal(const student bk);
	friend std::ostream& operator<<(std::ostream& os, const student& bk);
};

