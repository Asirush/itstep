#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int end;
//первая задача
/*
	int x, y, z;
	cout << "Введите количество ягод собранных Машей: "; cin >> x; cout << endl;
	cout << "Введите количество ягод собранных Мишей: "; cin >> y; cout << endl;
	cout << "Введите количество ягод сьеденных ребятами: "; cin >> z; cout << endl;

	int a = x + y;

	if (a >= z) {
		cout << "ребята собрали: " << x + y - z << endl;
	}
	else {
		cout << "ребята не могли сьесть больше собранного!";
	}
*/
//вторая задача
	int m1, m2, m3, havyest, havyest2, counter=1;
	cout << "Введите массу первого толстяка: "; cin >> m1; cout << endl;
	cout << "Введите массу второго толстяка: "; cin >> m2; cout << endl;
	cout << "Введите массу третьего толстяка: "; cin >> m3; cout << endl;

	if ((m1 < 94 || m1>727) || (m2 < 94 || m2>727) || (m3 < 94 || m3>727)) { cout << "указана некорректная масса толстяка!" << endl; }

	if ((m1 == m2) && (m1 > m3)) { havyest = m1; havyest2 = m2; counter += 1; }
	if ((m2 == m3) && (m2 > m1)) { havyest = m2; havyest2 = m3; counter += 1; }
	if ((m1 == m3) && (m1 > m2)) { havyest = m1; havyest2 = m3; counter += 1; }

	else if (m1 > m2 && m1 > m3) { havyest = m1; }
	else if (m2 > m1 && m2 > m3) { havyest = m2; }
	else if (m3 > m1 && m3 > m2) { havyest = m3; }

	if (counter == 1) { cout << "победитель: " << havyest << endl; }
	else {
		cout << "победитель: " << havyest << " " << havyest2 << endl;
	}
	cin >> end;
	return 0;
}
