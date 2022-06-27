#pragma once
#include <list>
#include "song.h"
#include "concert.h"

class user
{
private:
	std::string _username;
	std::list<song> _selected_songs;
public:
	user(std::string a);
	void show_menu();
	void add_new_song();
	void continue_or_exit();
};

