//exam 
#include <iostream>
#include <cmath>
#include <windows.h>
#include <string.h>

using namespace std;

char mass1[10][10], mass2[10][10];
string map_name1, map_name2;
char* pmass = &mass2[0][0];

bool start_menu() {
	char status;
	system("cls");

	cout << "Start the game! Press 'S' to start" << endl; cin >> status;
	if (status == 's' || status == 'S') { return true; }
	else return false;
}
void gen_empty_map(char mass[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mass[i][j] = '#';
		}
	}
}
//symbol meaning:
	//  # - water   
	//  * - miss   
	//  x - hit   
	//  ^ - ship 
void show_map(char mass[10][10], string map_name) {
	//show map name & parametrs
	cout << "Map: " << map_name << endl << "	symbol meaning:" << endl << "		# - water" << endl << "		* - miss" << endl << "		x - hit" << endl << "		^ - ship" << endl;

	//show map
	cout << "   abcdefghij" << endl;
	for (int i = 0; i < 10; i++) {
		if (i < 9) { cout << i + 1 << " |"; }
		else { cout << i + 1 << "|"; }
		for (int j = 0; j < 10; j++) {
			mass[i][j] = char(35);
			cout << mass[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void show_map_timer(char mass[10][10], string map_name) {
	for (int i = 10; i > 0; i--) {
		//show map name & parametrs
		cout << "Map: " << map_name << endl << "	symbol meaning:" << endl << "		# - water" << endl << "		* - miss" << endl << "		x - hit" << endl << "		" << char(223) << " - ship" << endl;

		//show map
		cout << "   abcdefghij" << endl;
		for (int i = 0; i < 10; i++) {
			if (i < 9) { cout << i + 1 << " |"; }
			else { cout << i + 1 << "|"; }
			for (int j = 0; j < 10; j++) {
				mass[i][j] = char(35);
				cout << mass[i][j];
			}
			cout << endl;
		}

		cout << "Waiting " << i << " seconds";
		Sleep(1000);
		system("cls");
	}
}
int select_mode() {
	cout << "Please select the battle mode:" << endl << "1. single player" << endl << "2. both players are bots" << endl << "3. two players" << endl;
	int a; cin >> a;
	return a;
}
//game modes:
	//1. single player
	//2. both players are bots
	//3. two players

void ship4(char* f) {
	//Получаем случайную ориентацию 4-ного корабля
	bool hororien = 1;
	//Получаем случайные координаты х и y для 4-ного корабля c учетом случаной ориентации
	int x;
	// Переменная-флаг которая даст сигнал о том, что все 18 клеток успешно прошли проверку
	int fourfree = 1;
	int xfourcorrect = 1;
	if (hororien == true) {
		// Проверяем 18 свободных клеток для 4-ного горизонтального корабля
		do {
			fourfree = 1;

			// Проверка x на корректность 

			do {
				//Переменная для статуса корректного x
				xfourcorrect = 1;
				x = rand() % 100;// Случайный адрес от 0 до 99
				//Проверяем не выпали ли числа 7, 17, 27 ... 97
				for (int i = 7; i <= 97; i = i + 10) {
					if (x == i) {
						xfourcorrect = 0;
						break;
					}
				}
				//Проверяем не выпали ли числа 8, 18, 28 ... 98
				for (int i = 8; i <= 98; i = i + 10) {
					if (x == i) {
						xfourcorrect = 0;
						break;
					}
				}
				//Проверяем не выпали ли числа 9, 19, 29 ... 99
				for (int i = 9; i <= 99; i = i + 10) {
					if (x == i) {
						xfourcorrect = 0;
						break;
					}
				}
			} while (xfourcorrect == 0);



			for (int i = x - 11; i <= x - 6; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x - 1; i <= x + 4; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 9; i <= x + 14; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}



		} while (fourfree == 0);
		for (int i = x; i < x + 4; i++) {
			f[i] = char(223);
		}
	}
	else if (hororien == false) {
		do {
			fourfree = 1;
			x = rand() % 100;// Случайный адрес от 0 до 99
			for (int i = x - 11; i <= x - 9; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x - 1; i <= x + 1; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 9; i <= x + 11; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 19; i <= x + 21; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 29; i <= x + 31; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}
			for (int i = x + 39; i <= x + 41; i++) {
				if (f[i] == char(223)) {
					fourfree = 0;
				}
			}

		} while (fourfree == 0);
		for (int i = x; i <= x + 30; i = i + 10) {
			f[i] = char(223);
		}
	}
}
void ship3(char* f) {
	//Получаем случайную ориентацию 4-ного корабля
	bool hororien = rand() % 2;
	//Получаем случайные координаты х и y для 4-ного корабля c учетом случаной ориентации
	int x, y;
	// Переменная-флаг которая даст сигнал о том, что все 18 клеток успешно прошли проверку
	int fourfree = 1;
	if (hororien == true) {
		// Проверяем 18 свободных клеток для 4-ного горизонтального корабля
		do {
			x = rand() % 10;// Случайная строка от 0 до 9
			y = rand() % 8; // Случайный столбик от 0 до 7
			for (int i = x - 1; i < x + 2; i++) {
				for (int j = y - 1; j < y + 4; j++) {
					if (f[i][j] == char(223)) {
						fourfree = 0;
						break;
					}
					else {
						fourfree = 1;
					}
				}
			}
		} while (fourfree == 0);
		for (int i = y; i < y + 3; i++) {
			f[x][i] = char(223);
		}
	}
	else if (hororien == false) {
		do {
			x = rand() % 8;// Случайная строка от 0 до 9
			y = rand() % 10; // Случайный столбик от 0 до 7
			for (int i = x - 1; i < x + 4; i++) {
				for (int j = y - 1; j < y + 2; j++) {
					if (f[i][j] == char(223)) {
						fourfree = 0;
						break;
					}
					else {
						fourfree = 1;
					}
				}
			}
		} while (fourfree == 0);
		for (int i = x; i < x + 3; i++) {
			f[i][y] = char(223);
		}
	}
}

void rand_fill(char* pmass, string map_name) {
	ship4(pmass);
	ship3(pmass);
}
//ship count - type
	//	   1 - 4
	//     2 - 3
	//     3 - 2
	//     4 - 1
string players_name() {
	string name;
	cout << "Enter players name: "; cin >> name;
	return name;
}
void fill_map(char mass[10][10], string map_name) {
	system("cls");
	show_map(mass, map_name); cout << endl;
	Sleep(5000);
	system("cls");

	int counter1 = 1, counter2 = 2, counter3 = 3, counter4 = 4;

	//for (int i = 4; i > 0; i--) {
	//	if (i == 4) {
	//		//counter 4
	//		cout << "please, select the 4 places to put single bit ships" << endl;
	//		for (int j = i; j > 0; j--) {
	//			cout << "Select locations: ";
	//			int a, b;
	//			char x;
	//			cin >> x >> b;
	//			a = char(x) - 96;
	//			mass[a][b] = char(223);
	//			system("cls");
	//			show_map(mass, map_name);
	//		}
	//	}
	//	system("cls");
	//	if (i == 3) {
	//		//counter 3
	//		cout << "please, select the 3 places to put double bit ships: ";
	//		while (counter3 > 0) {
	//			cout << "Select mode(hor/ver): "; string a; cin >> a;
	//			if (a == "hor") {
	//				char locationa;
	//				int locationb;
	//				system("cls");
	//				show_map(mass, map_name);
	//				cout << "Enter ship location(1,2,3/ a,b,c): "; cin >> locationa >> locationb;
	//				if (char(locationa) - 96 + 1 < 11 && locationb < 11) {
	//					mass[char(locationa) - 96][locationb] = char(223);
	//					mass[char(locationa) - 95][locationb] = char(223);
	//				}
	//				else { cout << "error: incorrect input data" << endl; Sleep(2000); system("cls"); }
	//				system("cls");
	//				show_map(mass, map_name);
	//			}
	//			else {
	//			}
	//			counter3--;
	//		}
	//	}
	//}
}
//player select where to put ships 1

int main() {


	//if (start_menu() == true) {
	//	system("cls");
	//	if (select_mode() == 1) {
	//		system("cls");
	//		map_name1 = players_name();
	//		map_name2 = "bot";
	//		gen_empty_map(mass1); gen_empty_map(mass2);
	//		//fill_map(mass1, map_name1);
	//		rand_fill(mass2, map_name2);

	//		show_map(mass2, map_name2);

	//	}


	//}

	gen_empty_map(mass2);
	rand_fill(pmass, map_name2);
	show_map(mass2, map_name2);
}