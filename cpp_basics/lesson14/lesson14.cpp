#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	//task1
/*	int mass[100], N, high;
	cout << "bridges: ";
	cin >> N; cout << endl;
	cout << "high: ";
	cin >> high;
	for (int i = 1; i <= N; i++) {
		cout << "bridge " << i << endl;
		mass[i] = rand() % 10 + 1;
		if (high >= mass[i]) {
			cout << "bus is broken! on bridge "<< i<<endl;
			break;
		}
		else {
			cout << "no errors, bridge " << i << " is passed" << endl;
		};

	}*/
	//task2
/*	int mass[100], N, high, flag = 0;
	cout << "bridges: ";
	cin >> N; cout << endl;
	cout << "high: ";
	cin >> high;
	for (int i = 1; i <= N; i++) {
//		cout << "bridge " << i << endl;
		mass[i] = rand() % 10 + 1;
		if (high >= mass[i]) {
			cout << "bus is broken! on bridge " << i << endl;
			break;
		}
		else if (i = N) { flag++; }

	}
	if (flag != 0) { cout << "all bridges are sucsessfuly passed!"; }

	return 0;*/
	//task3
	/*
В автобусе будет случайное количество пассажиров от 2 до 50
У каждого пассажира есть статус того, в какой части автобуса он находится (передняя и задняя)
Если пассажир находится в передней части автобуса, то он погибает при аварии;
Если пассажир находится в задней части автобуса, то он выживает.

Нужен массив со статусом того, где сидит каждый пассажир и при аварии погибают те пассажиры
которые сидят в задней части автобуса.
Программа должна вывести количество выживших пассажиров
Для каждого пассажира в отдельном массиве статус места определяется рандомом (либо 0 для сзади, либо 1
для спереди).
*/
	int mass[100], N, high, flag = 0, pass_count, bus_health = 100;
	bool passangers_count[50];
	cout << "bridges: ";
	cin >> N; cout << endl;
	cout << "high: ";
	cin >> high;

	pass_count = rand() % 50 + 1;

	for (int i = 0; i <= pass_count; i++) {
		passangers_count[i] = rand() % 1;
	}

	for (int i = 1; i <= N; i++) {
		mass[i] = rand() % 10 + 3;
		for (int j = 0; j <= pass_count; j++) {
			passangers_count[j] = rand() % 1;
		}


		if (bus_health == 0) { cout << "Bus is broken!" << endl; break; }
		cout << endl << "bridge " << i << " = " << mass[i] << endl;


		//bridge is higher - no actions needed
		//bridge makes only damage
		if (high / 2 <= mass[i] && high > mass[i]) {
			cout << "bus is hiten on bridge " << i << endl;
			bus_health -= 50;
			for (int j = 0; j <= pass_count; j++) {
				if (passangers_count[j] == 1) { cout << "passanger " << j << " have died!" << endl; }
			}
		}
		//bridge dies
		else if (high / 2 >= mass[i]) { bus_health = 0; break; }
	}

	return 0;
}