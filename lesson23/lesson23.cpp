#include <iostream>
#include <stdlib.h>
#include <Windows.h>

/*
Sleep(2000);
system("cls");
*/

using namespace std;

//task 1
/*
int fact(int N) {
    if (N == 0) return 0;
    else if (N == 1) return 1;
    else return N * fact(N - 1);
}

void reduce2(int N) {
    cout << N << endl;
    if (N > 0) {
        return reduce2(N - 1);
    }
}

int reduce(int N) {
    for (int i = N; i > 0; i--) {
        if (i != 1) { return reduce(i - 1); }
    }

}

char rosk(char mass[20], char a) {
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < 20; i++) {
        if (mass[i] == a) { mass[i] = ' '; }
        cout << mass[i];
    }
    return 0;
    
}

int main()
{
    setlocale(LC_ALL, "Russian");
    char mass[20]; int flag = 0;
    cout << "Заполнение массива: " << endl;

    for (int i = 0; i < 20; i++) {
        mass[i] = ' ';
    }

    for (int i = 0; i < 20; i++) {
        cin >> mass[i];
        flag++;
        if (mass[i] == '.') { break; }
    }

    for (int i = 0; i < flag; i++) {
        char a;
        cout << "Запретите букву: "; cin >> a;
        cout << rosk(mass, a) << endl;
    }
    return 0;
}*/

//task 2
/*
char shorting(char mass[20], int a) {
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < a; i++) {
        cout << mass[i];
    }
    
    
    return 0;

}

int main()
{
    setlocale(LC_ALL, "Russian");
    char mass[20]; int flag = 0;
    cout << "Заполнение массива: " << endl;

    for (int i = 0; i < 20; i++) {
        mass[i] = ' ';
    }

    for (int i = 0; i < 20; i++) {
        cin >> mass[i];
        flag++;
        if (mass[i] == '.') { break; }
    }

    for (int i = flag; i > 0; i--) {
        cout << shorting(mass, i) << endl;
    }
    return 0;
}*/

//task 3

int mass[10];

int mass_input(int a) {
    return mass[a] = rand() % 8 + 1;
}

int return_mass(int mass[]) {
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << mass[i] << " ";
    }
    return 0;
}

int filter_once(int mass[]) {
    for (int i = 0; i < 10; i++) {
        int min = mass[i];
        for (int j = 0; j < 10; j++) {
            if (mass[i] < min) return min = mass[i];
        }
    }
}

int main() {
    for(int i =0; i < 10; i++) mass_input(i);
    cout << return_mass(mass);
    for (int i = 0; i < 9; i++) {
        cout << i << "  ";
        return_mass(mass);
        filter_once(mass);
    }



}