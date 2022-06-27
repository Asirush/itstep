#pragma once
#include <iostream>
class song
{
private:
	std::string _name;
	size_t _voice_counter;
public:
	song();
	song(std::string name);
	song(std::string &name);
	size_t show_counter();
	void add_counter();
	bool operator< (song a);
	void operator++ ();
};

