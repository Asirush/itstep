#pragma once
#include <string>
#include <iostream>
#include "house_animals.h"

class cat : public house_animals
{
	std::string name;
	std::string colour;
	size_t veigth;
	std::string breed;
public:
	cat(std::string nm, std::string col, size_t vgth, std::string bree);
	cat(std::string nm);

	void Sound();
	void Show();
	void Type();
};

