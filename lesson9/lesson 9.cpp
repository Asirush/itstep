#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
//task 1
	int a, summ = 0;
	cin >> a;
	for (int i = a; i <= 500; i++) {
		summ += i;
	}
	cout << summ << endl;
//task 2
	int x, y, out = 0;
	cin >> x>>y;
	for (int i = 0; i <= y; i++) {
		out *= x;
	}
	cout << out << endl;
//task 3
	int mid = 0;
	for (int i = 1; i <= 1000; i++) {
		mid += i;
	}
	cout << mid / 1000 << endl;
//task 4
	int a_t4, out_t4;
	cin >> a_t4;
	if (a_t4 >= 1 && a_t4 <= 20) {
		for (int i = a_t4; i < 20; i++) {
			out_t4 *= i;
		}
	}
	else { cout << "error, incorrect a" << endl; }
//task 5
	int k;
	cin >> k;
	for (int i = 1; i <= 10; i++) {
		cout << i << " * " << k << " = " << i * k << endl;
	}
	return 0;
}