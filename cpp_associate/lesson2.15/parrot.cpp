#include "parrot.h"

parrot::parrot(std::string nm, std::string col, double vgth, std::string bree)
{
	name = nm;
	colour = col;
	veigth = vgth;
	breed = bree;
}

parrot::parrot(std::string nm)
{
	name = nm;
}

void parrot::Sound()
{
	std::cout << "meow-meow" << std::endl;
}

void parrot::Show()
{
	std::cout << "parrots name: " << name << std::endl;
	std::cout << "parrots colour: " << colour << std::endl;
	std::cout << "parrots veigth: " << veigth << std::endl;
	std::cout << "parrots breed: " << breed << std::endl;
}

void parrot::Type()
{
	std::cout << breed << std::endl;
}
