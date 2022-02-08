#include <iostream>
#include <stdlib.h>
#include <Windows.h>

/*
Sleep(2000);
system("cls");
*/

using namespace std;
//task1
/*
void greetings(string a) {
	cout << "Привет, " << a << endl;
}

void greet() {
	cout << "Добро пожаловать!"  << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	greet();
	greetings("Нуржан");
}*/
//task2
/*
void randomizer(int number1, int number2, int number3) {
	string words_adg[5] = { "красивый", "кривой", "быстрый", "молниеносный", "невидимый" };
	cout << words_adg[number1] << " ";

	string words_no[5] = { "конь", "слон", "волк", "тигр", "верблюд" };
	cout << words_no[number2] << " ";

	string words_ve[5] = { "стоит в лесу", "поет на скале", "кричит на горе", "бежит по реке", "ползет на спине" };
	cout << words_ve[number3] << " ";

}

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a>>b>>c; cout << endl;
	while (true) {
		randomizer(a, b,c); 
		Sleep(2000);
		system("cls"); 
	}
	return 0;
}*/
//task3
/*
bool unlocked = false;
int flag = 0;

void check_pass(string password) {
	string passes[5] = { "1234567", "password", "Kolya322", "nurzhan228", "asdfghjkl" }, valid;
	if (flag == 0) { valid = passes[rand() % 5]; flag++; }
	if (password == valid) { cout << "access!" << endl; unlocked = true; }
	else { cout << "bruh" << endl; }
}
int main() {
	setlocale(LC_ALL, "Russian");
	int counter = 3, number_of_done = 0; string pass;

	

	while (number_of_done != counter) {
		cin >> pass;
		check_pass(pass);
		number_of_done++;
		cout << "Осталось попыток: " << counter - number_of_done << endl;
		if (unlocked == true) { break; }
	}
	
	return 0;
}*/

//task4

int sqrt_num(int a, int b) {
	int start = a;
	for (int i = 0; i < b; i++) {
		a = a * start;
	}
	return a;
}

int summ(int a, int b) {
	return a + b;
}
int main() {
	int a, b; cin >> a >> b;
	int summa = sqrt_num(a, b);
	cout << summa << endl;
}

/*
setlocale(LC_ALL, "Russian");
srand(time(0));
//= rand() % 2 + 1;
return 0;
// range = rand()%(max - min + 1) + min;
*/