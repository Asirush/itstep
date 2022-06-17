#include <iostream>
#include"MyException.h"

using namespace std;

int main()
{
	try
	{
		int first = 5, second = 0;
		if (second == 0)
			throw MyException("Division by zero");
	}
	catch (MyException& exp)
	{
		cout << exp.what() << endl;
	}
	catch (...)
	{
		cout << "Other exception" << endl;
	}

	return 0;
}