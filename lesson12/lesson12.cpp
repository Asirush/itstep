#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	//task 1 
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
	
	//arrays
	srand(time(0));
	
	unsigned int A[16], B[16];
	int max = 0, min = 0, summ=0;
	
	for (int i = 0; i < 16; i++) {
		A[i] = rand() % 10;	
		cout << A[i] << ", ";
	}
	cout << endl;

	for (int j = 0; j < 16; j++) {
		/*if (j = 0) {
			max = A[j];
			min = A[j];
		}
		else {*/
			if (A[j] > max) {
				max = A[j];
			}
			else if (A[j] < min) {
				min = A[j];
			}
			else if (A[j] = max) {
				max = A[j];
			}
			else if (A[j] = min) {
				min = A[j];
			}
			summ += A[j];
			
		
	}
	for (int i = 0; i < 16; i++) {
		if (A[i] % 2 == 1) {
			B[i] == A[i];
		}
	}
	cout << "max: " << max << endl << "min: " << min << endl<<"sum: "<<summ<<endl<<"numbers: ";
	
	cout << endl;
	return 0;
}