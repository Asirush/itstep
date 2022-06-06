#include "humster.h"

humster::humster(std::string nm, std::string col, double vgth, std::string bree)
{
	name = nm;
	colour = col;
	veigth = vgth;
	breed = bree;
}

humster::humster(std::string nm)
{
	name = nm;
}

void humster::Sound()
{
	std::cout << "meow-meow" << std::endl;
}

void humster::Show()
{
	std::cout << "humsters name: " << name << std::endl;
	std::cout << "humsters colour: " << colour << std::endl;
	std::cout << "humsters veigth: " << veigth << std::endl;
	std::cout << "humsters breed: " << breed << std::endl;
}

void humster::Type()
{
	std::cout << breed << std::endl;
}
