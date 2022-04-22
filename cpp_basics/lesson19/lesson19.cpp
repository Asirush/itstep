#include <iostream>
#include <stdlib.h>
#include <Windows.h>

/*
Sleep(2000);
system("cls");
*/

using namespace std;

int main()
{
    //setlocale(LC_ALL, "Russian");
    srand(time(0));
    //= rand() % 2 + 1;

    //task 1
    /*
    const int m = 10, r = 10;
    int mass[m];

    for (int i = 0; i < r; i++)
    {
        mass[i] = rand() % 20 + 1;
        cout << mass[i] << " ";
    }
    cout << endl;

    for (int j = r; j > 0; j--) {
        for (int i = 0; i < r - 1; i++) {
            if (mass[i] > mass[i + 1]) {
                int cur = mass[i];
                mass[i] = mass[i + 1];
                mass[i + 1] = cur;
            }
        }
    }
    cout << endl;

    for (int i = 0; i < r; i++)
    {
        cout << mass[i] << " ";
    }
    cout << endl;*/
    //task 2

    const int n = 6, m = 102, k = 100;
    char table[n][m];
    int a, b, counter = 0;

    cout << "a, b: ";
    cin >> a >> b;
    cout << endl;

    //заполнение массива
    for (int i = 1; i < a--; i++) {
        for (int j = 1; j < b--; j++) {
            int value = rand() % 2 + 1;
            if (value == 1) {
                table[i][j] = '*';
            }
            else {
                table[i][j] = '.';
            }
            cout << table[i][j];
        }
        cout << endl;
    }

    //заполнение расширенного массива
    for (int i = 0; i < a; i++) {

    }


    
    cout << endl;

    //вывод вспомогательной таблицы
    for (int i = 0; i < a + 2; i++) {
        for (int j = 0; j < b + 2; j++) {
            cout << test[i][j];
        }
        cout << endl;
    }

    //проверка мертвой клетки
    for (int i = 1; i < a; i++) {
        for (int j = 1; j < b; j++) {
            
        }
    }


    return 0;
}

// range = rand()%(max - min + 1) + min;
