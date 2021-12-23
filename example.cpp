#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
//homework - task1
	/*
	for (int i = 100; i <= 999; i++) {
		if (i/100 == (i % 10) || i/100 == (i%100 - i%10) || i%10 == (i%100 - i%10)) {
			cout <<endl<< i;
		}
	}
	cout << endl;
	*/
//homework - task 2
	/*
	int counter = 899;
	for (int i = 100; i <= 999; i++) {
		if (i / 100 == (i % 10) || i / 100 == (i % 100 - i % 10) || i % 10 == (i % 100 - i % 10)) {
			counter--;
		}
	}
	cout << endl << counter << endl;;
	*/
//homework - task 3
	/*
	int r = 0, N;
	cin >> N;

		while (N != 0) {
			r = N % 10;
			N = N / 10;
			if (r == 3 || r == 6) {
				
			}
			else {
				cout << r;
			}
		}
	*/
	return 0;
}