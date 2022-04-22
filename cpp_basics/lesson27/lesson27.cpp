#include <iostream>
#include <cmath>
#include <windows.h>
#include <string.h>

using namespace std;


//
//int main() {
//
//    int a = 10, b = 20;
//    int* ta = &a;
//
//    cout << *ta << endl;
//
//    ta = &b;
//
//    cout << *ta << endl;
//
//    int c = 320;
//    const int const* pc = &c;
//
//    return 0;
//}
/*
int main() {
	string name = "Berik";
	string& pname = name; // Создаем ссылку на pname на переменную name
	string* bname = &name;
	string* cname = &pname;

	cout << name << endl << pname << endl << *bname << endl << *cname << endl;

}
*/
/*
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap2(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void todouble(int *a) {
	*a *= 2;
}

void todouble2(int& a) {
	a *= 2;
}

int main() {
	/*int a = 5;
	int b = 10;
	cout << a << " " << b << endl;
	swap(&a, &b);
	cout << a << " " << b << endl;
	return 0;

	// создание динамического массива
	int n;
	cin >> n;

	int* parray = new int[n];

	for (int i = 0; i < n; i++)
	{
		parray[i] = rand() % 5;
		cout << parray[i] << " ";
	}
	cout << endl;
	// очистка динамических данных
	//delete []parray; //delete parray;

	if (parray!=0) { //if(parray==0)
		delete[]parray; //delete parray;
		parray = nullptr;
		cout << "array has been deleted" << endl;
	}
	else { cout << "parray has been deleted" << endl; }
	//for (int i = 0; i < n; i++)
	//{
	//	cout << parray[i] << endl;
	//}

}*/

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