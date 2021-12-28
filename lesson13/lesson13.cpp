#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	/*
	//arrays
	srand(time(0));

	unsigned int A[16], B[16];
	int max = 0, min = 0, summ = 0;

	for (int i = 0; i < 16; i++) {
		A[i] = rand() % 50 - 25;  //range from -25 to 25
		cout << A[i] << ", ";
	}
	cout << endl;

	for (int j = 0; j < 16; j++) {
		if (j = 0) {
			max = A[j];
			min = A[j];
		}
		else {
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
	cout << "max: " << max << endl << "min: " << min << endl << "sum: " << summ << endl << "numbers: "<<endl;
	*/
	//marks_task
	/*
	int a[100], N;
	cout << "how many marks? ";
	cin >> N;
	//оценки
	cout << "old marks: ";
	for (int i = 0; i < N; i++) {
		a[i] = rand() % 5 + 1;  
		cout << a[i] << ", ";
	}
	//замена оценок
	for (int i = 0; i < N; i++) {
		if (i == 5) { a[i] = 2; }
		else if (i == 4) { a[i] = 1; }
	}
	cout << endl<< "new marks: ";
	for (int i = 0; i < N; i++) {
		cout << a[i] << ", ";
	}
	cout << endl;*/
	//taxes_task
	int N, V[100], counter = 0, persent = 0;
	double B[100], max = 0;
	//income
	cout << "count of companies: ";
	cin >> N;
	cout << "values: ";
	for(int i = 0; i < N; i++) {
			V[i] = rand() % 153 + 1;
			cout << V[i] << ", ";
	}
	cout << endl<< "persentage: ";
	//persents
	for (int i = 0; i < N; i++) {
		B[i] = rand() % 99 + 1;
		B[i] = B[i] / 100;
		cout << B[i] * 100 << "%" << ", ";
	}
	cout << endl<<"value for gov: ";
	//value of the company
	for (int i = 0; i < N; i++) {
		cout << V[i] * B[i] << ", ";
			if (V[i]*B[i] >= max) {
				max = V[i]*B[i];
				counter = i++;
			}
	}
	cout <<endl<< "max: " << counter << endl<<"value: "<<max<<endl;

	cout << endl;
	return 0;
}