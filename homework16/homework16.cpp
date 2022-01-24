#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	//task1

/*	int numbers[10], min = 0, max = 0;
	for (int i = 0; i < 10; i++) {
		numbers[i] = rand() % 10 + 1;
		if (numbers[i] >= max) {
			max = numbers[i];
		}
		else if (numbers[i] <= min) {
			min = numbers[i];
		}
	}
	cout << "max: " << max << endl << "min: " << min << endl;*/

	//task2

/*	int numbers[10], max = 10, min = 1, number, summ = 0;

	cout << "Input numbers: " << endl << "max: "; cin >> max; cout << endl << "min: "; cin >> min;cout << endl << endl << "mass: ";


	for (int i = 0; i < 10; i++) {
		numbers[i] = min + rand() % (max-min);
		cout << numbers[i] << " ";
	}
	cout << endl;

	cout << "input value: "; cin >> number;

	for (int i = 0; i < 10; i++) {
		if (numbers[i] < number) {
			summ += numbers[i];
		}
	}
	cout << "summ = " << summ<<endl;*/

	//task3

/*	int value[12], range_start, range_finish, max = 0, min = 5000;

	for (int i = 1; i <= 12; i++)
	{
		cout << "value of month " << i<<" "; cin >> value[i];
	}

	cout << "enter months" << endl << "start: "; cin >> range_start; cout << "end: "; cin >> range_finish; cout << endl;

	for (int j = range_start; j < range_finish; j++) {
		if (value[j] < min) { min = value[j]; }
		else if (value[j] >= max) { max = value[j]; }
	}

	cout << endl << "max: " << max << endl << "min: " << min << endl;*/

	//task 4

	int numbers[99999], N;
	cout << "enter N: "; cin >> N;
	
	//заполнение
	for (int i = 0; i < N; i++)
	{
		numbers[i] = rand() % 10 + 1;
	}
	
	// 1 сумма отрицательных элементов
	int low_summ = 0;
	
	for (int i = 0; i < N; i++)
	{
		if (numbers[i] < 0) {
			low_summ += numbers[i];
		}
	}

	// 2 Произведение элементов, находящихся между min и max элементами
	int min_id=0, max_id=0, min, max, value=1;
	
	for (int i = 0; i < N; i++)
	{
		if (i == 0) {
			min = numbers[i];
			min_id = i;
		}
		else if (numbers[i] <= min) {
			min = numbers[i];
			min_id = i;
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		if (i == 0) {
			max = numbers[i];
			max_id = i;
		}
		else if (numbers[i] >= max) {
			max = numbers[i];
			max_id = i;
		}
	}
	
	if (min_id < max_id) {
		for (int i = min_id; i < max_id; i++)
		{
			value *= numbers[i];
		}
	}
	
	// 3 Произведение элементов с четными номерами.
	int value_2;
	
	for (int i = 2; i < N; i+2)
	{
		value_2 *= numbers[i];
	}

	// 4 Сумму элементов, находящихся между первым и последним отрицательными элементами.
	int min_f, min_l, counter1=0, counter2=0, summ4;
	
	for (int i = 0; i < N; i++)
	{
		if (numbers[i] < 0) {
			if (counter1 == 0) {
				min_f = i;
				counter1++;
			}
		}
	}
	
	for (int i = N; i > 0; i--)
	{
		if (numbers[i] < 0) {
			if (counter2 == 0) {
				min_l = i;
				counter2++;
			}
		}
	}

	for (int i = min_f; i < min_l; i++)
	{
		summ4 += numbers[i];
	}

	return 0;
}

