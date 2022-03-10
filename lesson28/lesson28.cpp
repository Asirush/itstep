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

int main() {

	wash_mashine bosch_washmashine = { "Bosch",5000, "red", 45, 30, 50, 3000, 90};
	cout <<"Washmashine rpm = " << bosch_washmashine.parametrs.power << endl;

	flatiron bosch_flatiron = { "Bosch", 3000, "flatiron 2000", 30, 150, true};
	cout << "Washmashine power = " << bosch_flatiron.parametrs.power << endl;

	boiler bosch_boiler = { "Bosch", 3000, "red", 5, 90 };
	cout << "Washmashine power = " << bosch_flatiron.parametrs.power << endl;
}