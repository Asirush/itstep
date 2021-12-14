#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
//task 1
/*
	double x, y, days = 1;
	cin >> x>>y;
	cout << days << " day distance = " << x << endl;
	
	while (x < y) {
		x = x+x*0.1;
		days++;
		cout << days << " day distance = " << x << endl;
	}

	cout << endl << "days: " << days << endl;
	Sleep(1000);
*/
//task 2
/*
	int N, count = 0, summ = 0, i = 1, j;
	cout << "add your number(>0):";
	cin >> N;
	if (N > 0) {

		while (N / i > 0) {
			count++;
			i *= 10;
		}
		cout << "count: " << count << endl;

		while (N > 0)
		{
			j = N % 10;
			summ = summ + j;
			N = N / 10;
		}
		cout << "summ: " << summ << endl;
	}
	else { cout << "error incorresct N" << endl; }
*/
//task 3


	return 0;
}