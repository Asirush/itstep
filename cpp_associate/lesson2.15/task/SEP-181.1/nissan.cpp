#include "pch.h"
#include "nissan.h"

#include <iostream>
#include <iomanip>

std::string nissan::getModel()
{
	switch (model)
	{
	case Almera: return ENUM_TO_STR(Almera);
	case Cefiro: return ENUM_TO_STR(Cefiro);
	case Juke: return ENUM_TO_STR(Juke);
	case Maxima: return ENUM_TO_STR(Maxima);
	}
	return std::string();
}

nissan::nissan() : car()
{
	this->model = 0;
}

nissan::nissan(int model, std::string release, float price) : car(release, price)
{
	this->model = model;
}

void nissan::printToString()
{
	std::cout << brand << " " << getModel() << " " << getRelease() << " " << std::setprecision(9) << getFullPrice() << std::endl;
}

void nissan::printCheck()
{
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "***<  " << SHOPING_ROOM << "   >***" << std::endl << std::endl;
	std::cout << " To purchase a car: " << brand << " " << getModel() << " " << getRelease() << std::endl;
	std::cout << " deposit " << getFullPrice() << std::endl;
	std::cout << "=============================================================" << std::endl;
}


nissan::~nissan()
{
}
