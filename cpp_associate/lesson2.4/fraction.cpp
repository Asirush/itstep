#include "fraction.h"

fraction::fraction()
{
	numerator = 0;
	denominator = 0;
}

fraction::fraction(const unsigned int num, const unsigned int den)
{
	this->numerator = num;
	this->denominator = den;
}

fraction fraction::operator+(const fraction& obj)
{
	int a = this->denominator * obj.denominator, b = this->numerator * obj.denominator, c = obj.numerator * this->denominator;
	return fraction(b+c, a);
}

fraction fraction::operator-(const fraction& obj)
{
	int a = this->denominator * obj.denominator, b = this->numerator * obj.denominator, c = obj.numerator * this->denominator;
	return fraction(b-c, a);
}

fraction fraction::operator*(const fraction& obj)
{
	return fraction(this->numerator * obj.numerator, this->denominator * obj.denominator);
}

fraction fraction::operator/(const fraction& obj)
{
	return fraction(this->numerator * obj.denominator, this->denominator * obj.numerator);
}

fraction fraction::operator+(const int& value)
{
	int a = this->denominator * 1, b = this->numerator * 1, c = value * this->denominator;
	return fraction(b + c, a);	
}

fraction fraction::operator-(const int& value)
{
	int a = this->denominator * 1, b = this->numerator * 1, c = value * this->denominator;
	return fraction(b - c, a);
}

fraction::operator float()
{
	if (this->numerator == 0 && this->denominator == 0) return 0;
	if (this->denominator == 0) { std::cout << "Error" << std::endl; return FLT_MAX; }
	return ((float)this->numerator / (float)this->denominator);
}

void fraction::show()
{
	std::cout << this->numerator << "/" << this->denominator << std::endl;
}
