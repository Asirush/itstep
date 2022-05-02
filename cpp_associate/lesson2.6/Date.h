#include <iostream>

using namespace std;

class Date
{
public:
	Date();
	~Date();
	Date(int a, int b, int c);
	Date(long long int a);

	unsigned long long int operator-(const Date& obj);
	unsigned long long int operator+(int days);
	Date operator+=(int days);

	void show();

private:
	unsigned long long int seconds;
};