/*
https://gist.github.com/be9/bad0196a86175ea95028
https://github.com/be9/oopcode/tree/master/wgs_84
https://www.gpslib.ru/tracks/info/50467/Gonka-IV-Etap-velokavkaza.html
*/

#include <iostream>
#include <fstream>
#include "Geopoint.h"
#include "trip.h"
#include "timer.h"

using namespace std;

int main() {
    /*
    Geopoint nsk_lenin_square(55.030039, 82.920084, 15, 0, 0, 0),
        msk_red_square(55.753915, 37.620525, 15, 0, 0, 0);

    cout << "Distance (km) = " <<
        nsk_lenin_square.distanceTo(msk_red_square) / 1000 << endl;
        */
    
    trip our_travel("geodata.gpx");

    return 0;
}
