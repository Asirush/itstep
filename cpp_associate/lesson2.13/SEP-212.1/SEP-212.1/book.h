#pragma once
#include<iostream>
#include<string>

class book
{
	std::string name;
	std::string author;
public:
	book(const char* nm, const char* thr);
	std::string get_name();
	std::string get_author();
	bool equal(const book bk);
	friend std::ostream& operator<<(std::ostream& os, const book& bk);
};

