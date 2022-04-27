#include <iostream>

class my_int {
public:
	my_int();
	my_int(const int v);
	my_int(const double v);
	operator float();
	my_int operator+(const my_int& obj);

private:
	int value;
};

int main()
{
	int a = 5;
	int b = a;
	a = b + 5;

	my_int c;
	my_int d = 5;
	my_int e = 5.0; // неявное приведение типа
	my_int f = (float)5.0; // явное приведение типа

}

my_int::my_int() : value(0)
{

}

my_int::my_int(const int v) : my_int()
{
	this->value = v;
}

my_int::my_int(const double v)
{
	this->value = (int)v;
}

my_int::operator float()
{
	return (float)this->value;
}

my_int my_int::operator+(const my_int& obj)
{
	return my_int(this->value + obj.value);
}


