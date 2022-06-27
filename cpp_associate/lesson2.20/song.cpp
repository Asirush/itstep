#include <iostream>
#include "song.h"


song::song()
{
	_name = "";
	_voice_counter = 0;
}

song::song(std::string name) : song()
{
	_name = name;
	_voice_counter++;
}

song::song(std::string &name) : song()
{
	_name = name;
	_voice_counter++;
}

size_t song::show_counter()
{
	return _voice_counter;
}

void song::add_counter()
{
	_voice_counter++;
}

bool song::operator<(song a)
{
	if (this->_voice_counter < a._voice_counter) { return true; }
	else return false;
}

void song::operator++()
{
	_voice_counter++;
}
