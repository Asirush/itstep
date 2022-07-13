#pragma once
#include "timer.h"

class Geopoint {
public:
    Geopoint(double _lat, double _lng, double _elev, int a, int b, int c)
        : lat(_lat), lng(_lng), elev(_elev), geopoint_time(a,b,c) {}

    // Широта
    double latitude() const { return lat; }

    // Долгота
    double longitude() const { return lng; }

    // Высота над уровнем моря
    double elevation() const { return elev; }

    // Расстояние до другой точки
    double distanceTo(const Geopoint& other);

private:
    double lat, lng, elev;
    timer geopoint_time;
};