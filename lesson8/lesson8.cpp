﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


//task 1
/*	int N, flag;
    cout << "Enter number of rows: ";
    cin >> N;
    cout << endl;

    for (int i = N, k = 0; i >= 1; --i, k = 0)
    {
        while (k != N - i )
        {
            cout << "  ";
            ++k;
        }

        for (flag = 2*i-1; flag >= 1; --flag)
        {
            cout << "^ ";
        }
        
        cout << endl;

    }
    
    for (int i = 1, k = 0; i <= N; ++i, k = 0)
    {
        for (flag = 1; flag <= N - i; ++flag)
        {
            cout <<"  ";
        }

        while (k != 2 * i - 1)
        {
            cout << "^ ";
            ++k;
        }
        cout << endl;
    }*/
//task 2
/*   int count, high, m1, m2, m3;
    
    cin >> count;
    if (count == 1) {
        cin >> m1;
        if (m1 <= 427) { cout << "crash 1" << endl; }
        else { cout << "no crash"; }
    }
    if (count == 2) {
        cin >> m1 >> m2;
        if (m1 <= 427) { cout << "crash 1"; }
        else if (m2 <= 427) { cout << "crash 2"; }
        else if (m1 > 427 && m2 > 427) { cout << "no crash"; }
    }
    if (count == 3) {
        cin >> m1 >> m2>>m3;
        if (m1 <= 427) { cout << "crash 1"; }
        else if (m2 <= 427) { cout << "crash 2"; }
        else if (m3 <= 427) { cout << "crash 3"; }
        else if (m1 > 427 && m2 > 427&&m3>427) { cout << "no crash"; }
    }
*/ 
//task 3
    int P, N;
    cout << "введите стоимость: "; cin >> P; cout << endl;
    cout << "введите количество кг: "; cin >> N; cout << endl;

    for (int i = 1; i <= N; i++) {
        cout << i << " киллограм стоит: " << P * i << endl;
    }


	cout << endl;
	return 0;
}