#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int end;
	/*
	for (size_t i = 0; i < 100; i++)
	{
		//для дебага используй "точки останова"(ПКМ - точка останова) 
		cout << i << endl;
	}
	*/
	
	//task 1
	/*
	int N, summ=0, out, a;
	cout << "Введите количество карт: "; cin >> N;
	cout << "Введите сумму карт без одной: "; cin >> a;

	for (size_t i = 0; i < N; i++)
	{
		summ += N;
	}

	if ((summ - a) > N) {
		cout << "Ошибка, потеряно больше одной карты"<<endl;
	}
	else {
		cout << "размер потерянной карты:" << summ - a << endl;
	}
	*/
	//task2
	/*
		int low = 1, high = 100, i;
		bool isPrime = true;

		while (low < high) {
			isPrime = true;
			if (low == 0 || low == 1) {
				isPrime = false;
			}
			else {
				for (i = 2; i <= low / 2; ++i) {
					if (low % i == 0) {
						isPrime = false;
						break;
					}
				}
			}

			if (isPrime)
				cout << low << " " << endl;

			++low;
		}
	*/
	//task3

	int n = 9;

	for (int i=1; i <= n; i++) {
		for (int j=1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}


	cin >> end;
	return 0;
}