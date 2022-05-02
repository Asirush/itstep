#include "Date.h"

Date::Date()
{
	seconds = 0;//1.1.1900
		// sec/day = 86400
		// sec/mon = 2,592,000
		// sec/usual_year = 31560000
}

Date::~Date()
{
}

Date::Date(int a, int b, int c)
{
	seconds = a * 86400 + b * 2592000 + c * 31560000;
}

Date::Date(long long int a)
{
	this->seconds = a - 59097600000;
}

unsigned long long int Date::operator-(const Date& obj)
{
	return (this->seconds - obj.seconds)/86400;
}

unsigned long long int Date::operator+(int days)
{
	return this->seconds + days*86400;
}

Date Date::operator+=(int days)
{
	return Date(this->seconds + days*86400);
}

void Date::show()
{
	unsigned long long int a = (this->seconds % 2592000) / 86400, b = (this->seconds % 31104000) / 2592000, c = this->seconds/31560000;
	cout << a << "." << b << "." << c << endl;
	//day = (seconds % 2592000) / 86400;
	//month = (seconds % 31104000) / 2592000;
	//year = seconds / 31104000;
}

