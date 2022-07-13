#pragma once
#include <iostream>
#include <fstream>
#include <list>
#include "Geopoint.h"
#include "trip.h"
#include "timer.h"

class trip
{
private:
	std::list <Geopoint> _travel_data;
public:
	trip(std::string a);
	void add_point(Geopoint a);
};

