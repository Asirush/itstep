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
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	//task1

    char a[10] = { '.','.','.','.','.','.','.','.','.','.'};
    int S, H;
    for (int i = 1; i <= 9; i++) {
        cout << "Ход крестиков\n";
        cout << a[1] << a[2] << a[3] << endl;
        cout << a[4] << a[5] << a[6] << endl;
        cout << a[7] << a[8] << a[9] << endl;
        cin >> S;
        a[S] = 'X';

        //Отображение игрового поля

        cout << a[1] << a[2] << a[3] << endl;
        cout << a[4] << a[5] << a[6] << endl;
        cout << a[7] << a[8] << a[9] << endl;

        if (a[1] == 'X' && a[2] == 'X' && a[3] == 'X') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[4] == 'X' && a[5] == 'X' && a[6] == 'X') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[7] == 'X' && a[8] == 'X' && a[9] == 'X') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[1] == 'X' && a[4] == 'X' && a[7] == 'X') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[2] == 'X' && a[5] == 'X' && a[8] == 'X') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[3] == 'X' && a[6] == 'X' && a[9] == 'X') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[1] == 'X' && a[5] == 'X' && a[9] == 'X') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[3] == 'X' && a[5] == 'X' && a[7] == 'X') {
            cout << "Победа крестиков \n";
            break;
        }

        Sleep(2000);
        system("cls"); // Очистка консоли

        cout << "Ход ноликов\n";

        cout << a[1] << a[2] << a[3] << endl;
        cout << a[4] << a[5] << a[6] << endl;
        cout << a[7] << a[8] << a[9] << endl;

        cin >> S;
        a[S] = 'O';

        cout << a[1] << a[2] << a[3] << endl;
        cout << a[4] << a[5] << a[6] << endl;
        cout << a[7] << a[8] << a[9] << endl;

        if (a[1] == 'O' && a[2] == 'O' && a[3] == 'O') {
            cout << "Победа ноликов \n";
            break;
        }
        else if (a[4] == 'O' && a[5] == 'O' && a[6] == 'O') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[7] == 'O' && a[8] == 'O' && a[9] == 'O') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[1] == 'O' && a[4] == 'O' && a[7] == 'O') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[2] == 'O' && a[5] == 'O' && a[8] == 'O') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[3] == 'O' && a[6] == 'O' && a[9] == 'O') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[1] == 'O' && a[5] == 'O' && a[9] == 'O') {
            cout << "Победа крестиков \n";
            break;
        }
        else if (a[3] == 'O' && a[5] == 'O' && a[7] == 'O') {
            cout << "Победа крестиков \n";
            break;
        }

        Sleep(2000);
        system("cls");

    }

	return 0;
}

