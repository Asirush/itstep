#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{
	//setlocale(LC_ALL, "Russian");
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
	return 0;
}