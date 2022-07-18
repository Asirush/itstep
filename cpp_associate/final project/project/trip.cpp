#include <iostream>
#include <fstream>
#include <list>
#include "Geopoint.h"
#include "trip.h"
#include "timer.h"

using std::string; using std::cin; using std::cout; using std::list; using std::ifstream;
using std::cerr; using std::endl;

trip::trip(std::string a)
{
    size_t point_counter(0);
    std::ifstream myfile(a);
    std::string mystring;

    if (myfile.is_open()) {
        while (myfile.good()) {
            myfile >> mystring;
            create_trip_list(mystring);
        }
    }
    std::cout << mystring.length();
}

void trip::generate_geopoints()
{
    while( )
}

void trip::create_trip_list(string a)
{
    trip_list.push_back(a);
}

void trip::add_point(Geopoint a)
{
    _travel_data.push_back(a);
}
