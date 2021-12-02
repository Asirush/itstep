#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int end;
	
	int hh, mm, b, c, hh_out, mm_out, days;
	cout << "Введите время начала пути: "; cin >> hh >> mm; cout << endl;
	cout << "Введите количество часов в пути: ";  cin >> b; cout << endl;
	cout << "Введите количество минут в пути: ";  cin >> c; cout << endl;
	if ((mm + c) >= 60)
	{
		hh += 1; mm_out = (mm + c) % 60;
		if ((hh + b) >= 24) { hh_out = (hh + b) % 24; days = (hh + b)/24; }
		else { hh_out = hh + b; days = (hh + b) / 24;}
	}
	else {
		mm_out = mm + c;
		if ((hh + b) >= 24) { hh_out = (hh + b) % 24; days = (hh + b) / 24;}
		else { hh_out = hh + b; days = (hh + b) / 24;}
	}
	cout << "Время по приезде: " << hh_out << ":" << mm_out << endl;
	cout << "Суток прошло: " << days << endl;

	cin >> end;
	return 0;
}

