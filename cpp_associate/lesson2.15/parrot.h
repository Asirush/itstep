#pragma once
#include <string>
#include <iostream>
#include "house_animals.h"

class parrot : house_animals
{
	std::string name;
	std::string colour;
	double veigth;
	std::string breed;
public:
	parrot(std::string nm, std::string col, double vgth, std::string bree);
	parrot(std::string nm);

	void Sound();
	void Show();
	void Type();
};

