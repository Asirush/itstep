#include <iostream>
#include <math.h>


using namespace std;

/*
int main()
{
    //указатели
    int a = 24;
    int* pa = &a;

    cout << "a = " << a << endl << "p address: " << pa << endl << "p meaning: " << *pa << endl;
    
}*/

void greaterr(int* a, int* b) {
    if (*a > *b) { cout << *a << " > " << *b << endl; }
    else if (*a < *b) { cout << *a << " < " << *b << endl; }
}

void get_value(int* a) {
    if (*a > 0) { cout << "+" << endl; }
    if (*a < 0) { cout << "-" << endl; }
}

void change_value(int* a, int* b) {
    int c = *a;
    *a = *b; *b = c;
    cout <<"a: "<< *a << " b: " << *b << endl;
}

void calculator(int* a, char* b, int* c) {
    int result = 0;
    if (*b == '+') { result = *a + *c; }
    if (*b == '-') { result = *a - *c; }
    if (*b == '*') { result = *a * *c; }
    if (*b == '/') { result = *a / *c; }
    cout << result;
}

void summ(int a[5], int i) {
    int *place;
    place = &a[i];
    int summ=0;
    for (int i = 0; i < 5; i++) {
        summ += *(place + i);
    }
    //return summ;
}

void summ_mass(int a, int b) {
    //for ();
}

int main() {
    //task1
    /*
    int a = 10, b = 20;
    int *pi, *pj; // создаем указатель
    pi = &a; // указываем на переменную a (адрес)
    pj = &b;

    greaterr(pi, pj);
    */
    //task2
    /*
    int c; int* pc;
    cin >> c;
    pc = &c;
    get_value(pc);
    */
    //task3
    /*
    int a, b, *pa, *pb;
    cout << "enter a:"; cin >> a; cout << "enter b: "; cin >> b;
    pa = &a; pb = &b;
    change_value(pa, pb);
    */
    //task4
    /*int a, b;
    char symbol;
    cout << "enter your values: a + b" << endl;
    cin >> a >> symbol >> b;
    int* pa = &a, * pb = &b; char* sym = &symbol;
    calculator(pa, sym, pb);*/
    //task 5
    /*int mass[5];
    for (int i = 0; i < 5; i++) {
        mass[i] = rand() % 9 + 1;
        cout << "mass[" << i+1 << "] = " << mass[i] << endl;
    }
    cout << summ(mass);*/
    //task6
    int a[100], b[100], c[200];
    int m, n;
    cin >> m >> n;

    int* pa = &a[0];
    int* pb = &b[0];
    cout << "mass a:" << endl;
    for (int i = 0; i < m; i++) {
        a[i] = rand()%9+1;
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "mass b:" << endl;
    for (int i = 0; i < n; i++) {
        b[i] = rand() % 9 + 1;
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "mass c:" << endl;
    for (int i = 0; i < m + n; i++) {
        if (i < m) { c[i] = *(pa + i); }
        else if (i >= m) { c[i] = *(pb + (i-m)); }
        cout << c[i] << " ";
    }
    
    }