#pragma once
#include "car.h"

#include <iostream>
#include <string>

class toyota : public car
{
private:
	int model;
	std::string getModel();
protected:
	const string brand = "Toyota";
public:
	enum { Camry, LandCruser };
	toyota();
	toyota(int model, std::string release, float price);
	virtual void printToString();
	virtual void printCheck();
	virtual ~toyota();
};