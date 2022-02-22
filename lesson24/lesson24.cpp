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

int summ(int a[5]) {
    int *place;
    place = &a[0];
    int summ=0;
    for (int i = 0; i < 5; i++) {
        
        summ += *(place + i);
    }
    return summ;
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
    int mass[5];
    for (int i = 0; i < 5; i++) {
        mass[i] = rand() % 9 + 1;
        cout << "mass[" << i+1 << "] = " << mass[i] << endl;
    }
    
    cout << summ(mass);
    
    
    }