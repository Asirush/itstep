#include "cat.h"

cat::cat(std::string nm, std::string col, size_t vgth, std::string bree)
{
	name = nm;
	colour = col;
	veigth = vgth;
	breed = bree;
}

cat::cat(std::string nm)
{
	name = nm;
}

void cat::Sound()
{
	std::cout << "meow-meow" << std::endl;
}

void cat::Show()
{
	std::cout << "cats name: " << name << std::endl;
	std::cout << "cats colour: " << colour << std::endl;
	std::cout << "cats veigth: " << veigth << std::endl;
	std::cout << "cats breed: " << breed << std::endl;
}

void cat::Type()
{
	std::cout << breed << std::endl;
}
