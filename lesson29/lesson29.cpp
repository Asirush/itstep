//exam 
#include <iostream>
#include <cmath>
#include <windows.h>
#include <string.h>

using namespace std;

bool start_menu() {
	char status;
	system("cls");

	cout << "Start the game! Press 'S' to start" << endl; cin >> status;
	if (status == 's' || status == 'S') { return true; }
	else return false;
}

void gen_empty_map(char mass[10][10]) {
	//symbol meaning:
		//  # - water   
		//  * - miss   
		//  x - hit   
		//  ^ - ship 
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mass[i][j] = '#';
		}
	}
}

void show_map(char mass[10][10], string map_name) {
	//show map name & parametrs
	cout << "Map: " << map_name << endl << "	symbol meaning:" << endl << "		# - water" << endl << "		* - miss" << endl << "		x - hit" << endl << "		^ - ship"<<endl;
	
	//show map
	cout << "   abcdefghij"<<endl;
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
		cout << "Map: " << map_name << endl << "	symbol meaning:" << endl << "		# - water" << endl << "		* - miss" << endl << "		x - hit" << endl << "		"<<char(223)<<" - ship" << endl;

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

void rand_fill(char mass[10][10], string map_name) {
	int counter1=1, counter2=2, counter3=3, counter4=4;
	
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

	for (int i = 4; i > 0; i--) {
			if (i == 4) {
				//counter 4
				cout << "please, select the 4 places to put single bit ships"<<endl;
				for(int j = i; j > 0; j--){
					cout << "Select locations: ";
					int a, b;
					char x;
					cin >> x >> b;
					a = char(x) - 96;
					mass[a][b] = char(223);
					system("cls");
					show_map(mass, map_name);
				}
			}
			system("cls");
			if (i == 3) {
				//counter 3
				cout << "please, select the 3 places to put double bit ships: ";
				while (counter3 > 0) {
					cout << "Select mode(hor/ver): "; string a; cin >> a;
					if (a == "hor") {
						char locationa;
						int locationb;
						system("cls");
						show_map(mass, map_name);
						cout << "Enter ship location(1,2,3/ a,b,c): "; cin >> locationa >> locationb;
						if (char(locationa)-96 + 1 < 11 && locationb < 11) {
							mass[char(locationa) - 96][locationb] = char(223);
							mass[char(locationa) - 95][locationb] = char(223);
						}
						else { cout << "error: incorrect input data" << endl; Sleep(2000); system("cls"); }
						system("cls");
						show_map(mass, map_name);
					}
					else {

					}
					counter3--;
				}
					
			}
			
	}
	

}
//player select where to put ships

int main() {
	char mass1[10][10], mass2[10][10];
	string map_name1, map_name2;

	if (start_menu() == true) {
		system("cls");
		if (select_mode() == 1) {
			system("cls");
			map_name1 = players_name();
			map_name2 = "bot";
			gen_empty_map(mass1);
			fill_map(mass1, map_name1);
			rand_fill(mass2, map_name2);
		}


	}

}

























