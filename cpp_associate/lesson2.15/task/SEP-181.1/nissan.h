#pragma once
#include "car.h"

#include <iostream>
#include <string>
using namespace std;

class nissan : public car
{
private:
	int model;
	std::string getModel();
protected:
	const string brand = "Nissan";
public:
	enum { Almera, Cefiro, Juke, Maxima };
	nissan();
	nissan(int model, std::string release, float price);
	virtual void printToString();
	virtual void printCheck();
	virtual ~nissan();
};
