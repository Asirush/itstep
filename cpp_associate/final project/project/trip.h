#pragma once
#include <iostream>
#include <fstream>
#include <list>
#include "Geopoint.h"
#include "trip.h"
#include "timer.h"

using std::string; using std::list;

class trip
{
private:
	list <Geopoint> _travel_data;
	list <string> trip_list;
public:
	trip(std::string a);
	void generate_geopoints();
	void create_trip_list(string a);
	void add_point(Geopoint a);
};

