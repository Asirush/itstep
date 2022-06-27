#include "concert.h"

concert::concert(std::string a)
{
	_concert_name = a;
}

void concert::add_song(song a)
{
	_songs.push_back(a);
}

void concert::show_list()
{
	
}

void concert::finish_voiting()
{
	show_list();
}

