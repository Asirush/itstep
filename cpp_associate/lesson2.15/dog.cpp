#include "dog.h"

dog::dog(std::string nm, std::string col, size_t vgth, std::string bree)
{
	name = nm;
	colour = col;
	veigth = vgth;
	breed = bree;
}

dog::dog(std::string nm)
{
	name = nm;
}

void dog::Sound()
{
	std::cout << "meow-meow" << std::endl;
}

void dog::Show()
{
	std::cout << "dogs name: " << name << std::endl;
	std::cout << "dogs colour: " << colour << std::endl;
	std::cout << "dogs veigth: " << veigth << std::endl;
	std::cout << "dogs breed: " << breed << std::endl;
}

void dog::Type()
{
	std::cout << breed << std::endl;
}
