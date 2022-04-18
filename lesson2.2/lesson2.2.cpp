#include <iostream>

class MyClass
{
public:
	MyClass();
	MyClass(int i);
	//explicit MyClass(int i);    //запрет, на неявный вызов метода
	MyClass(double i);

private:
	int test;
};

int main()
{

	// variables format is the same class
	int test(0);
	MyClass test_2 = 0;
	//if you wish to use create object ONLY this way add "explicit MyClass(int i);"
	MyClass test_3(0);
}

MyClass::MyClass()
{
	test = 0;
}

MyClass::MyClass(int i)
{
	test = i;
}

MyClass::MyClass(double i)
{
	test = (int)i;
}
