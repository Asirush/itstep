#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int x, y, days = 0;
	cin >> x>>y;
	
	while (x < y) {
		x = x+x*0.1;
		days++;
	}

	cout << "days: " << days << endl;
	Sleep(1000);


	return 0;
}