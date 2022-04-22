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
/*
	int m1, m2, m3;
	cout << "Введите массу первого толстяка: "; cin >> m1; cout << endl;
	cout << "Введите массу второго толстяка: "; cin >> m2; cout << endl;
	cout << "Введите массу третьего толстяка: "; cin >> m3; cout << endl;

	if ((m1 < 94 && m1>727) && (m2 < 94 && m2>727) && (m3 < 94 && m3>727)) {

		if ((m1 == m2) && (m1 > m3)) { cout << "первый_и_второй_самые_тяжелые!" << endl;}
		else if ((m2 == m3) && (m2 > m1)) { cout << "третий и второй самые тяжелые!" << endl;}
		else if ((m1 == m3) && (m1 > m2)) { cout << "первый и третий самые тяжелые!" << endl;}

		else if (m1 > m2 && m1 > m3) { cout << "первый самый тяжелый" << endl; }
		else if (m2 > m1 && m2 > m3) { cout << "второй самый тяжелый" << endl; }
		else if (m3 > m1 && m3 > m2) { cout << "третий самый тяжелый" << endl; }

	}
	else { cout << "указана некорректная масса толстяка!" << endl; }
*/
//третья задача
	int start, end_temp, time;
	char mode;

	cout << "введите режим используемый в кондиционере" << endl << " - freeze (c)" << endl << " - heat (h)" << endl << " - auto (a)" << endl << " - fan (f)" << endl;
	cin >> mode;
	cout << "введите действующую температуру: "; cin >> start; cout << endl;
    if (mode == 'f') { cout << "Включен режим вентилятора, действующая температура будет: " << start << endl; }
	else {
		cout << "введите требуемую температуру: "; cin >> end_temp; cout << endl;

		if (start == end_temp && mode != 'f') { cout << "Температура соответствует требуемой" << endl; }

		else if (mode == 'a') {
			if (start < end_temp) { cout << "Автоматически выбран режим нагрева, температура через час будет: " << end_temp << endl; }
			else if (start > end_temp) { cout << "Автоматически выбран режим охлаждения, температура через час будет: " << end_temp << endl; }
		}

		else if (mode == 'c' && start > end_temp) { cout << "Через час будет достигнута температура: " << end_temp << endl; }
		else if (mode == 'c' && start < end_temp) { cout << "Включен режим охлаждения, для достижения требуемой температуры выберите режим обогрева (h)" << endl; }

		else if (mode == 'h' && start < end_temp) { cout << "Через час будет достигнута температура: " << end_temp << endl; }
		else if (mode == 'h' && start > end_temp) { cout << "Включен режим нагревания, для достижения требуемой температуры выберите режим охлаждения (c)" << endl; }
	}
	


	cin >> end;
	return 0;
}
