#pragma once
#include <ctime>
#include "system.h"
#include "invoice.h"
class passanger
{
private:
	std::string _name;
	std::string _station_name;
	tm _time;
public:
	void request_ride(std::string nm, std::string station, tm execution_time);
	void show_ride_data(std::string station);
};

