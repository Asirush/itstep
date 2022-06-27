#pragma once
#include "song.h"
#include "user.h"
#include <list>

class concert
{
private:
	std::string _concert_name;
	std::list<song> _songs;
public:
	concert(std::string a);
	void add_song(song a);
	void show_list();
	void finish_voiting();

};

