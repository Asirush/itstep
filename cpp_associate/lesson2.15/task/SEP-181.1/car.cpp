#include "pch.h"
#include "car.h"

#include <iostream>

car::car() : price(0)
{
}

car::car(std::string release, float price)
{
	this->release = release;
	this->price = price;
}

float car::getFullPrice()
{
	if (price > 0) {
		float full = price + price / 100 * tradeMargin;
		return full + full / 100 * valueAddedTax;
	}
	return 0.0;
}

std::string car::getRelease()
{
	return release;
}

void car::printToString()
{
	std::cout << "Error. Listing price list is not available for the base class." << std::endl;
}

void car::printCheck()
{
	std::cout << "Error. Check printing is not available for the base class." << std::endl;
}

car::~car()
{
}