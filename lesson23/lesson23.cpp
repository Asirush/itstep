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

    int a[10][10];
    cin >> M >> N;

    for (int i = 0; i < M; i++) {
        cout << i << ")";
        for (int j = 0; j < N; j++) {
            a[i][j] = rand() % 2 + 1;
            cout << a[i][j];
        }
        cout << endl;
    }



    return 0;
}

