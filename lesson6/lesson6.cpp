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
//homework
	int k1, m1, k2, m2, out1, out2;
	double l1, l2;
	cin >> k1 >> l1 >> m1; cout << endl;
	if ((k1 >= 100 && k1 <= 30000 && k1%100 == 0) && (l1 <= 100 && l1 >= 0) && (m1 >= 1 && m1 <= 100)) {
		out1 = k1 * (l1 / 100) * m1;
	}
	cin >> k2 >> l2 >> m2; cout << endl;
	if ((k2 >= 100 && k2 <= 30000 && k2 % 100 == 0) && (l2 <= 100 && l2 >= 0) && (m2 >= 1 && m2 <= 100)) {
		out2 = k2 * (l2 / 100) * m2;
	}
	cout << "убытки склада 1:" << out1 << endl << "убытки склада 2:" << out2<<endl;

	cin >> end;
	return 0;
}

