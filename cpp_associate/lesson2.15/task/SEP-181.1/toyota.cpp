#include "pch.h"
#include "toyota.h"

#include <iomanip>

toyota::toyota() : car()
{
}

std::string toyota::getModel()
{
	switch (model)
	{
	case Camry: return ENUM_TO_STR(Camry);
	case LandCruser: return ENUM_TO_STR(LandCruser);
	}
	return std::string();
}

toyota::toyota(int model, std::string release, float price) : car(release, price)
{
	this->model = model;
}

void toyota::printToString()
{
	std::cout << brand << " " << getModel() << " " << getRelease() << " " << std::setprecision(9) << getFullPrice() << std::endl;
}

void toyota::printCheck()
{
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "***<  " << SHOPING_ROOM << "   >***" << std::endl << std::endl;
	std::cout << " To purchase a car: " << brand << " " << getModel() << " " << getRelease() << std::endl;
	std::cout << " deposit " << getFullPrice() << std::endl;
	std::cout << "=============================================================" << std::endl;
}


toyota::~toyota()
{
}
