#include <iostream>
using namespace std;

//task1
string a = "Hello world, I love Linux";
char ab[];
char alpbt[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz!.<>,?&*@#$%^()-_=+";
int counter[72], letter_counter = 0, input = 1;
int exit_but = 0;

void first_task() {
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < 72; j++) {
			if (a[i] == alpbt[j])counter[j]++;
		}
	}

	for (int i = 0; i < 72; i++) {
		if (counter[i] != 0) { cout << "Letter " << alpbt[i] << " meets: " << counter[i] << endl; }
	}
}

//task 2
void second_task(){
	//cout << "Enter your sentence: "; cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == char(32)) { letter_counter++; }
	}
	system("cls"); cout << "Words count: " << letter_counter + 1 << endl;
}

void third_task() {
	string word;
	cout << "Enter your word: "; cin >> word;
	for (int i = 0; i < word.length(); i++) {
		for (int j = word.length(); j > 0; j--) {
			if (a[i] == a[j] && i != j && j > i) { system("cls"); cout << "true" << endl; }
			else{ system("cls"); cout << "false" << endl; }
		}
	}
}

void menu() {
	
	while (exit_but == 0) {
		cout << "Select task to check: " << endl << "1. task 2" << endl << "2. task 3" << endl << "3. task 4" << endl << "4. exit" << endl;
		cin >> input;
		switch (input) {
		case 1:
			system("cls");
			first_task();
			break;
		case 2:
			system("cls");
			second_task();
			break;
		case 3:
			system("cls");
			third_task();
			break;
		case 4:
			system("cls");
			exit_but++;
		}
	}
}

int main() {
	menu();
	
	return 0;
}
