#include <iostream>
#include <Windows.h>
#include <cmath>
#include <windows.h>
#include <string.h>
using namespace std;

string username1, username2;
int game_mode=0, player1_points = 0, player2_points = 0;
char mass1[10][10], mass2[10][10], reserve1[10][10], reserve2[10][10];
char* m1 = &mass1[0][0];
char* m2 = &mass2[0][0];
char* r1 = &reserve1[0][0];
char* r2 = &reserve2[0][0];

string username_func(){
	string username;
	cout << "Enter username: "; cin >> username;
	return username;
}

int select_game_mode() {
	cout << "Select gamemode: " << endl;
	cout << "1. single player" << endl << "2. both bots" << endl << "3. two players" << endl;
	cin >> game_mode;
	return game_mode;
}

//             mass_link; enemy_mass_link; playername;
void show_map_mode1(char* a, char* b, string map_name) {
	cout << "player: " << map_name << endl;
	cout << "  abcdefghij" << endl;
	for (int i = 0; i < 10; i++) {
		if (i+1 < 10) { cout << i + 1 << " "; }
		else { cout << i + 1; }
		for (int j = 0; j < 10; j++) {
			cout << a[i * 10 + j];
		}
		cout << endl;
	}
	cout << endl<<"enemy map: "<<endl;
	for (int i = 0; i < 10; i++) {
		if (i+1 < 10) { cout << i + 1 << " "; }
		else { cout << i + 1; }
		for (int j = 0; j < 10; j++) {
			cout << b[i * 10 + j];
		}
		cout << endl;
	}
}
/*
map parametrs:
	# - water (char 35)
	X - hit (char 88)
	- - miss (char 45)
	+ - ship (char 43)
*/

void ship4(char* f) {
	//Получаем случайную ориентацию 4-ного корабля
	bool hororien = rand() % 2;
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
			x = rand() % 70;// Случайный адрес от 0 до 69
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
	//Получаем случайную ориентацию 3-ного корабля
	bool hororien = rand() % 2;
	//Получаем случайную координату х  для 3-ного корабля c учетом случайной ориентации
	int x;
	// Переменная-флаг которая даст сигнал о том, что все 15 клеток успешно прошли проверку
	int threefree = 1;
	int xthreecorrect = 1;
	if (hororien == true) {
		// Проверяем 15 свободных клеток для 3-ного горизонтального корабля
		do {
			threefree = 1;

			// Проверка x на корректность 

			do {
				//Переменная для статуса корректного x
				xthreecorrect = 1;
				x = rand() % 100;// Случайный адрес от 0 до 99

				//Проверяем не выпали ли числа 8, 18, 28 ... 98
				for (int i = 8; i <= 98; i = i + 10) {
					if (x == i) {
						xthreecorrect = 0;
						break;
					}
				}
				//Проверяем не выпали ли числа 9, 19, 29 ... 99
				for (int i = 9; i <= 99; i = i + 10) {
					if (x == i) {
						xthreecorrect = 0;
						break;
					}
				}
			} while (xthreecorrect == 0);

			for (int i = x - 11; i <= x - 7; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x - 1; i <= x + 3; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x + 9; i <= x + 13; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}



		} while (threefree == 0);
		for (int i = x; i < x + 3; i++) {
			f[i] = char(223);
		}
	}
	// Проверка 3-ного вертикального корабля
	else if (hororien == false) {
		do {
			threefree = 1;
			x = rand() % 80;// Случайный адрес от 0 до 79


			for (int i = x - 11; i <= x - 9; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x - 1; i <= x + 1; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x + 9; i <= x + 11; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x + 19; i <= x + 21; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}
			for (int i = x + 29; i <= x + 31; i++) {
				if (f[i] == char(223)) {
					threefree = 0;
				}
			}


		} while (threefree == 0);
		for (int i = x; i <= x + 20; i = i + 10) {
			f[i] = char(223);
		}
	}
}
void ship2(char* f) {
	//Получаем случайную ориентацию 2-ного корабля
	bool hororien = rand() % 2;
	//Получаем случайную координату х для 2-ного корабля c учетом случайной ориентации
	int x;
	// Переменная-флаг которая даст сигнал о том, что все 12 клеток успешно прошли проверку
	int twofree = 1;
	int xtwocorrect = 1;
	if (hororien == true) {
		// Проверяем 12 свободных клеток для 2-ного горизонтального корабля
		do {
			twofree = 1;

			// Проверка x на корректность 

			do {
				//Переменная для статуса корректного x
				xtwocorrect = 1;
				x = rand() % 100;// Случайный адрес от 0 до 99


				//Проверяем не выпали ли числа 9, 19, 29 ... 99
				for (int i = 9; i <= 99; i = i + 10) {
					if (x == i) {
						xtwocorrect = 0;
						break;
					}
				}
			} while (xtwocorrect == 0);

			for (int i = x - 11; i <= x - 8; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x - 1; i <= x + 2; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x + 9; i <= x + 12; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}



		} while (twofree == 0);
		for (int i = x; i < x + 2; i++) {
			f[i] = char(223);
		}
	}
	// Проверка 2-ного вертикального корабля
	else if (hororien == false) {
		do {
			twofree = 1;
			x = rand() % 80;// Случайный адрес от 0 до 89


			for (int i = x - 11; i <= x - 9; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x - 1; i <= x + 1; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x + 9; i <= x + 11; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}
			for (int i = x + 19; i <= x + 21; i++) {
				if (f[i] == char(223)) {
					twofree = 0;
				}
			}


		} while (twofree == 0);
		for (int i = x; i <= x + 10; i = i + 10) {
			f[i] = char(223);
		}
	}
}
void ship1(char* f) {

	//Получаем случайную координату х для 1-ного корабля
	int x;
	// Переменная-флаг которая даст сигнал о том, что все 9 клеток успешно прошли проверку
	int onefree = 1;


	// Проверяем 12 свободных клеток для 2-ного горизонтального корабля
	do {
		onefree = 1;
		x = rand() % 100;// Координата для 1-ного корабля от 0 до 99
		for (int i = x - 11; i <= x - 9; i++) {
			if (f[i] == char(223)) {
				onefree = 0;
			}
		}
		for (int i = x - 1; i <= x + 1; i++) {
			if (f[i] == char(223)) {
				onefree = 0;
			}
		}
		for (int i = x + 9; i <= x + 11; i++) {
			if (f[i] == char(223)) {
				onefree = 0;
			}
		}



	} while (onefree == 0);
	// Ставим одиночный кораблик
	f[x] = char(223);
}

void rand_map_gen(char* a){
	for (int i = 0; i < 100; i++) { a[i] = char(35); }
	ship4(a);
	ship3(a); ship3(a);
	ship2(a); ship2(a); ship2(a);
	ship1(a); ship1(a); ship1(a); ship1(a);
}

//              username     enemy_map   enemys_map_monitor
bool player_hit(string name, char* a, char* b) {
	char num1(97-106); int num2;
	cout << "select locations: "; cin >> num1; cin >> num2;
	if (a[char(num1) * 10 + num2] == char(223)) {
		b[char(num1) * 10 + num2] = char(88);
		return true;
	}
	else {
		a[char(num1) * 10 + num2] = char(45);
		return false;
	}
}

void game_mode_1() {
	username1 = username_func();
	username2 = "bot";
	rand_map_gen(m1);
	rand_map_gen(m2);

	//game
	while (true && player1_points<21 || player2_points<21) {
		show_map_mode1(m1, r2, username1);
		while (player_hit(username1, m2, r2) == true && (player1_points < 20 || player2_points < 20))  system("cls"); show_map_mode1(m1, r2, username1); player_hit(username1, m2, r2); player1_points++;
		while (player_hit(username2, m1, m1) == true && (player1_points < 20 || player2_points < 20))  system("cls"); show_map_mode1(m1, r2, username1); player_hit(username2, m1, m1); player2_points++;
	}
	if (player1_points == 20) { system("cls"); cout << username1 << " is a winner!"; }
	else if (player2_points == 20) { system("cls"); cout << username2 << " is a winner!"; }
}
void game_mode_2() {};
void game_mode_3() {};

int main() {
	if (select_game_mode() == 1) {
		game_mode_1();
	}
	else if (select_game_mode() == 2) {
		game_mode_2();
	}
	else if (select_game_mode() == 3) {
		game_mode_3();
	}
	return 0;
}