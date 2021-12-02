#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int end;
//task 1
/*  int hh, mm, hh_in, mm_in, hh_out, mm_out, days, last_hh, last_mm;
	cout << "Введите время начала пути: "; cin >> hh >> mm; cout << endl;
	cout << "Введите количество часов и минут в пути: ";  cin >> hh_in >> mm_in; cout << endl;

	//last_hh = hh_out % 24; last_mm = mm_out % 60;

	if ((mm + mm_in) >= 60)
	{
		hh += 1; mm_out = (mm + mm_in) % 60;
		if ((hh + hh_in) >= 24) { hh_out = (hh + hh_in) % 24; days = (hh + hh_in)/24; last_hh = hh_out % 24; last_mm = mm_out % 60;
		}
		else { hh_out = hh + hh_in; days = (hh + hh_in) / 24; last_hh = hh_out % 24; last_mm = mm_out % 60;
		}
	}
	else {
		mm_out = mm + mm_in;
		if ((hh + hh_in) >= 24) { hh_out = (hh + hh_in) % 24; days = (hh + hh_in) / 24; last_hh = hh_out % 24; last_mm = mm_out % 60;
		}
		else { hh_out = hh + hh_in; days = (hh + hh_in) / 24; last_hh = hh_out % 24; last_mm = mm_out % 60;
		}
	}
	cout << "Время по приезде: " << hh_out << ":" << mm_out << endl;
	cout << "Суток прошло: " << days << endl << "Остаточных часов и минут: "<< last_hh << ":"<< last_mm<<endl;
*/
//task 2
/*	int N, i, j, out;
	cout << "Введите первое количество станций в ветке: "; cin >> N; cout << endl;
	cout << "Введите номер станции посадки Вити: "; cin >> i; cout << endl;
	cout << "Введите Номер станции выхода Вити: "; cin >> j; cout << endl;

	if (i < j && ((j - i) <= N / 2)) { out = j-i - 1; }
	else if (i > j && ((i - j) <= N / 2)) { out = i-j - 1; }
	else if (i < j && ((j - i) > N / 2)) { out = N - j + i - 1; }
	else if (i > j && ((i - j) > N / 2)) { out = N - i + j - 1; }

	cout << "Количество станций равно: " << out << endl;
*/
//task 3


	cin >> end;
	return 0;
}

