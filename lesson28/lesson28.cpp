#include <iostream>
#include <cmath>
#include <windows.h>
#include <string.h>

using namespace std;

static int a, b;

void entering(int mass[], int c) {
	for (int i = 0; i < c; i++) {
		mass[i] = rand() % 5 + 1;
	}
}

void show_array(int mass[], int c) {
	for (int i = 0; i < c; i++) {
		cout << mass[i] << " ";
	}cout << endl;
}

void two_mass_integration(int parray1[], int parray2[]) {

	int* parray3 = new int[a + b];

	for (int i = 0; i < a + b; i++) {
		if (i < a) {
			parray3[i] = parray1[i];
		}
		else {
			parray3[i] = parray2[i - a];
		}
	}
	show_array(parray3, a + b);
}

int main() {


	cout << "enter arrays values: "; cin >> a >> b;

	int* array1 = new int[a];
	int* array2 = new int[b];

	entering(array1, a);
	entering(array2, b);
	show_array(array1, a);
	show_array(array2, b);

	two_mass_integration(array1, array2);
	delete[]array1;
	delete[]array2;

	return 0;
}