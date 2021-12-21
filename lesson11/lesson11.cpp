#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
//task1 
/*
	int A, B, C, T, limit, without, summ = 0, over;
	cout << "Введите лимит минут в месяц: "; cin >> A;
	cout << "Введите стоимость разговора в минуту в лимите: "; cin >> B;
	cout << "Введите стоимость разговора в минуту вне лимита: "; cin >> C;
	cout << "Введите кол-во минут: "; cin >> T;
	if (A < 1000 && B < 1000 && C < 1000 && T < 1000) {
		if (T > A) {
			summ += A * B;
			summ += (T - A) * C;
		}
		else {
			summ += T * B;
		}
		cout << "Итоговая сумма: " << summ << endl;
	}
	else { cout << "error, incorrect data input" << endl; }
*/
//task 2
/*	int n, min, max, i = 1, current;
	cout << "сколько арбузов: "<<endl;
	cin >> n;
	while (i < n+1) {
		cout << "введите вес арбуза № " << i<< " ";
		cin >> current;
		if (i == 1) {
			min = current;
			max = current;
		}
		else {
			if (current < min) {
				min = current;
			}
			else if (current > max) {
				max = current;
			}
		}
		
		i++;
	}
	cout << "Maximum: " << max << endl << "Minimum: " << min << endl;
*/
	int n, g, age, max=0, countmax=0;
	cout << "человек: " << endl;
	cin >> n;
	if (n > 100) { cout << "too many numbers" << endl; }
	else {
		for (int i = 0; i <= n-1; i++) {
			cout << "введите пол(male 1, female 2) и возраст ";
			cin >> g >> age;
			if (i == 1) { max = age; }
			else {
				if (g == 1 && age == max) { countmax += 1; }
				else if (g == 1 && age > max) {
					max = age;
				}
			}
		}
		cout << "oldest man has age: " << max << endl << "count of sameage pepole: " << countmax;
	}

	return 0;
}