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
char rect(int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	rect(10, 20);
}*/

//task2
/*void trng(int high, int max) {
	int k = 1; int n = max - 1;
	for (int j = 0; j < high; j++) {
		for (int i = 0; i < n; i++) {
			cout << " ";
		}
		for (int i = 0; i < k; i++) {
			cout << "*";
		}
		cout << endl;
		n -= 1;
		k += 2;
	}
}

int main() {
	int a, b, c=0;
	cout << "min: "; cin >> a; cout << endl << "max: ";cin >> b;
	c = b;

	for (int i = a; i < b; i++) {
		trng(i, b); Sleep(2000); system("cls");
	}

	return 0;
}*/

//task3
void trng(int min, int max, int delay) {
	int k = 1, n = max - 1, low = min;
	for (int z = min; z <= max; z++) {
		for (int j = 0; j < low; j++) {
			cout << " ";
		}
		for (int i = 0; i < k; i++) {
			cout << "*";
		}
		cout << endl;
		n -= 1;
		k += 2;
	}
	Sleep(delay);
	system("cls");
	low += 1;
	n = max - 1;
	k = 1;
}

void natural(int a) {
	int counter = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) { counter++; }
	}
	if (counter > 2) { cout << "answer: " << "false"; }
	else { cout << "answer: " << "true"; }
	
}

void sqre(int a) {
	cout << "answer: " << a * a * a << endl;
}

void max_num(int a, int b) {
	if (a > b) { cout << a << " is bigger then " << b; }
	else if(b > a){ cout << b << " is bigger then " << a; }
	else if (b == a) { cout << b << " equal to " << a; }
}

int main() {
	//call trng
	/*int a, b, c;
	cout << "min: "; cin >> a;
	cout << "max: "; cin >> b;
	cout << "delay(in ms): "; cin >> c;

	trng(a, b, c);
	*/

	//call nxt
	int a; 
	cout << "your number: "; cin >> a;
	natural(a);

	return 0;
}