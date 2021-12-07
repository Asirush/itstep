#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int end;

	for (size_t i = 0; i < 100; i++)
	{
		//для дебага используй "точки останова"(ПКМ - точка останова) 
		cout << i << endl;
	}

	cin >> end;
	return 0;
}