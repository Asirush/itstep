#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	//task1 
	/*
	int N, i=1, temp, count_of_warm_days=0, coldest_day, counter=1;
	cin >> N;

	while (i<=N)
	{
		cin >> temp;
		if (temp > 0)
		{
			count_of_warm_days++;
			if (i == counter)
			{
				coldest_day = temp;
			}
			else if (temp < coldest_day) {
				coldest_day = temp;
			}
			
		}
		else {
			counter++;
		}
		i++;
	}
	cout << endl << "min_temp: " << coldest_day << endl << "warm days count: " << count_of_warm_days << endl << "cold days: " << N - count_of_warm_days << endl;;
	*/
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