#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int end;
//первая задача

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

	cin >> end;
	return 0;
}
