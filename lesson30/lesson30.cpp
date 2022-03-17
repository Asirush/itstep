#include <iostream>
#include <cmath>
#include <windows.h>
#include <string.h>

using namespace std;

char mass1[10][10], mass2[10][10];
string map_name1, map_name2;
int game_mode, player1_points = 0, player2_points = 0;

bool start_menu() {
	char status;
	system("cls");

	cout << "Start the game! Press 'S' to start" << endl; cin >> status;
	if (status == 's' || status == 'S') { return true; }
	else return false;
}
//start the game

int select_mode() {
	system("cls");
	cout << "Please select the battle mode:" << endl << "1. single player" << endl << "2. both players are bots" << endl << "3. two players" << endl;
	int a; cin >> a;
	return a;
}
//game modes:
	//1. single player
	//2. both players are bots
	//3. two players

//FUNCTIONS
void show_map(char mass[10][10], string map_name, int game_mode) {
	system("cls");
	if (game_mode == 1) {
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
	}
	if (game_mode == 2) {}
	if (game_mode == 3) {}

}

void timer(int a) {
	Sleep(a * 1000);
	system("cls");
}
// i - seconds

string username() {
	system("cls");
	string username;
	cout << "Please enter username: "; cin >> username;
	return username;
}

void rand_map(char mass[10][10]) {
	int size_counter = 4;

	//generate ship parrameters
	//Получаем случайную ориентацию 4-ного корабля
	bool hororien = rand() % 2;
	//Получаем случайные координаты х и y для 4-ного корабля c учетом случаной ориентации
	int x, y;
	if (hororien == false) {
		x = rand() % 7; // Случайная строка от 0 до 6
		y = rand() % 10; // Случайный столбик от 0 до 9
	}
	else {
		x = rand() % 10;// Случайная строка от 0 до 9
		y = rand() % 7; // Случайный столбик от 0 до 6
	}

	// Переменная-флаг которая даст сигнал о том, что все 18 клеток успешно прошли проверку
	int fourfree = 1;
	if (hororien == true) {
		// Проверяем 18 свободных клеток для 4-ного горизонтального корабля
		do {
			x = rand() % 10;// Случайная строка от 0 до 9
			y = rand() % 7; // Случайный столбик от 0 до 6
			for (int i = x - 1; i < x + 2; i++) {
				for (int j = y - 1; j < y + 5; j++) {
					if (mass[i][j] == char(223)) {
						fourfree = 0;
						break;
					}
					else {
						fourfree = 1;
					}
				}
			}
		} while (fourfree == 0);
		for (int i = y; i < y + 4; i++) {
			mass[x][i] = char(223);
		}
		// Задаем случайные x, y пока переменная fourfree не станет равна 1
	}
	// Проверяем 18 свободных клеток для 4-ного вертикального корабля
	for (int i = x - 1; i < x + 5; i++) {
		for (int j = y - 1; j < y + 2; j++) {
			if (mass[i][j] == char(223)) {
				break;
			}
		}
	}

}

void play() {

}

// 1 SINGLE PLAYER
void single_player_game() {
	string map_name;
	map_name = username();

	show_map(mass1, map_name, 1); timer(5);

	while (player1_points <= 10 || player2_points <= 10) {

	}
}
// 2 BOTS
// 3 TWOPLAYERS



int main() {
	//start game
	start_menu();
	//select game mode
	game_mode = select_mode();

	//single player
	if (game_mode == 1) {
		single_player_game();
	}
	//both players are bots
	if (game_mode == 2) {

	}
	//both players are people
	if (game_mode == 3) {

	}
	return 0;
}