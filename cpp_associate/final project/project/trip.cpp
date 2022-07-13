#include <iostream>
#include <fstream>
#include <list>
#include "Geopoint.h"
#include "trip.h"
#include "timer.h"

trip::trip(std::string a)
{
    size_t point_counter(0);

    std::ifstream myfile(a);
    std::string mystring;

    if (myfile.is_open()) {
        while (myfile.good()) {
            myfile >> mystring;
            std::cout << mystring<<std::endl;
        }
    }
    std::cout << mystring.length();

}

void trip::add_point(Geopoint a)
{
    _travel_data.push_back(a);
}
