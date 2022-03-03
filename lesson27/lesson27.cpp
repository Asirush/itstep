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

int main() {
	int a = 5;
	int b = 10;
	cout << a << " " << b << endl;
	swap(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}