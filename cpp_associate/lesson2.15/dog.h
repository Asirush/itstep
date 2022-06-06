#pragma once
#include <string>
#include <iostream>
#include "house_animals.h"

class dog : house_animals
{
	std::string name;
	std::string colour;
	size_t veigth;
	std::string breed;
public:
	dog(std::string nm, std::string col, size_t vgth, std::string bree);
	dog(std::string nm);

	void Sound();
	void Show();
	void Type();
};

