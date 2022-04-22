#include <iostream>
#include <cmath>
#include <windows.h>
#include <string.h>

using namespace std;

/*
struct date {
	int day;
	int month;
	int year;
};


int main() {
	date MyBirthday = { 20, 10, 1990 };
}

*/

// task 2
/*
struct my_group {
	char name[100];
	int age;
	int groupid;
	double avg_score;
};


int main() {
	my_group berik = { "Berikzhan", 20, 5, 6.5 };
	cout << berik.name << " " << berik.age << endl;

	my_group amir;
	cout << "Your age? "; cin >> amir.age; cout << endl;
	cout << "Your group id? "; cin >> amir.groupid; cout << endl; 

}*/

// task 3
/*
struct shared_parametrs {
	char company[100];
	int power;
};

struct wash_mashine {
	shared_parametrs parametrs;
	char colour[100];
	int width;
	int length;
	int high;
	int spin_speed;
	int heating_temperatures;
};

struct flatiron {
	shared_parametrs parametrs;
	char model[100];
	int min_tmp;
	int max_tmp;
	bool steam;
};

struct boiler {
	shared_parametrs parametrs;
	char colour[50];
	int value;
	int heating_temperatures;
};


// show function
void show_company(wash_mashine a) {
	cout << a.parametrs.company << endl;
}

int main() {
	//enter data to structures
	wash_mashine bosch_washmashine = { "Bosch",5000, "red", 45, 30, 50, 3000, 90};
	cout <<"Washmashine rpm = " << bosch_washmashine.parametrs.power << endl;

	flatiron bosch_flatiron = { "Bosch", 3000, "flatiron 2000", 30, 150, true};
	cout << "Washmashine power = " << bosch_flatiron.parametrs.power << endl;

	boiler bosch_boiler = { "Bosch", 3000, "red", 5, 90 };
	cout << "Washmashine power = " << bosch_flatiron.parametrs.power << endl;

	//call show function
	show_company(bosch_washmashine);
}
*/

struct animal {
	char name[30];
	char animal_class[30];
	char simple_name[30];
};

animal input() {
	system("cls");
	animal a;
	cout << "Enter animal name: "; cin >> a.name;
	cout << "Enter animal class: "; cin >> a.animal_class;
	cout << "Enter animal simple name: "; cin >> a.simple_name;
	return a;
}

void show_data(animal a) {
	system("cls");
	cout << "Animal name: " << a.name << endl;
	cout << "Animal class: " << a.animal_class << endl;
	cout << "Animal simple name: " << a.simple_name << endl << endl;
}

void show_voice(animal a) {
	if (a.name == "null") { cout << "gav-gav" << endl; }
	if (a.name == "horse") { cout << "igu-gu-gu" << endl; }
	if (a.name == "cat") { cout << "miev" << endl; }
	if (a.name == "bird") { cout << "fiew-fiew" << endl; }
}

int select_animal() {
	int a;
	cout << "Select some of the existing animals: " << endl << "1. dog" << endl << "2. horse" << endl << "3. cat" << endl << "4. bird" << endl;
	cin >> a;
	return a;
}

int main() {

	//animal dog = { "null", "null", "null" };
	//animal horse = { "null", "null", "null" };
	//animal cat = { "null", "null", "null" };
	//animal bird = { "null", "null", "null" };

	if (select_animal() == 1) { input(a); show_data(dog); show_voice(dog); }
	if (select_animal() == 2) { input(horse); show_data(horse); show_voice(horse); }
	if (select_animal() == 3) { input(cat); show_data(cat); show_voice(cat); }
	if (select_animal() == 4) { input(bird); show_data(bird); show_voice(bird); }

}
