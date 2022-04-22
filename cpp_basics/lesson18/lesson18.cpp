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

//task1
    /*
    int a[10][10], M, N;
    cin >> M >> N;

    for (int i = 0; i < M; i++) {
        cout << i << ") ";
        for (int j = 0; j < N; j++) {
            a[i][j] = rand() % 2 + 1;
            cout << a[i][j];
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 2; i < M; i+=2) {
        cout << i << ") ";
        for (int j = 0; j < N; j++) {
                cout << a[i][j];
        }
        cout << endl;
        
    }
    */
//task2
 /*   int a[10][10], M, N, counter = 1, mass[10];
    cin >> M >> N;

    for (int i = 1; i <= M; i++) {
        cout << i << ") ";
        for (int j = 1; j <= N; j++) {
              
        }
        cout << endl;
    }
    */

//task3
    int N, keyboard[20], a[20][50];
     
    N = rand() % 16 + 5;

    for  (int i = 0; i < N; i++)
    {
        keyboard[i] = rand() % 41 + 10;
    }



    return 0;
}

// range = rand()%(max - min + 1) + min;
