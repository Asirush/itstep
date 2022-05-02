#pragma once
class Date
{
public:
	Date();
	~Date();
	Date(const int a, const int b, const int c);

	bool operator<(const Date& obj);
	int operator-(const Date& obj);
	void show(const Date& obj);
	Date operator+(const int a);
	Date operator+=(const int a);

private:
	int day;
	int month;
	int year;
	long long seconds;
};

Date::Date()
{
	seconds = 33782400; //33,782,400
	month = (seconds%31104000) / 2592000;
	year = seconds/31104000;
	day = (seconds%2592000)/86400;
}

Date::~Date()
{
}

inline bool Date::operator<(const Date& obj)
{
	return this->seconds < obj.seconds;
}

inline int Date::operator-(const Date& obj)
{
	unsigned long long int a = this->seconds - obj.seconds;
	return a/86400;
}

inline void Date::show(const Date& obj)
{
	std::cout << obj.day << "." << obj.month << "." << obj.year << std::endl;
}

inline Date Date::operator+(const int a)
{
	this->seconds += a * 86400;
	return Date();
}

inline Date Date::operator+=(const int a)
{
	this->seconds += a * 86400;
	return Date();
}

inline Date::Date(const int a, const int b, const int c)
{
	seconds = a * 86400 + b * 2592000 + (c - 1900) * 31104000;
	month = (seconds % 31104000) / 2592000;
	year = seconds / 31104000;
	day = (seconds % 2592000) / 86400;
}


