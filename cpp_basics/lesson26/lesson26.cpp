#include <iostream>
#include <cmath>
#include <windows.h>
#include <string.h>

using namespace std;

//lesson start
/*
int main()
{
    char* pmessage;
    char name[]="Hello World!";
    pmessage = name;

    int i = 0;

    while (*(pmessage + i) != '\0') {
        cout << *(pmessage + i);
        i++;
    }

}*/
/*
int main()
{
    char del;
    char* pmessage;
    char name[] = "Hello World!";
    pmessage = name;

    int i = 0;

    cout << "enter letter u wanna delete: "; cin >> del;

    while (*(pmessage + i) != '\0') {
        if (*(pmessage + i) != del)cout << *(pmessage + i);

        i++;
    }
}*/
/*
int main()
{
    char del;
    char* pmessage, * pdel;
    char name[] = "ROSKOMNADZOR ZAPRETIL BUKVU A";
    pmessage = name;
    pdel = &del;

    int len = 30;
    cout << name << endl;
    while (true) {
        cout << "Введите букву которую вы хотите удалить\n";
        cin >> pdel; // Буква которую мы хотим удалить мы вводим в переменную del
        for (int i = 0; i < 30; i++) {
            if (pmessage[i] == *pdel) {
                for (int j = i; j < len; j++) {
                    pmessage[j] = pmessage[j + 1];
                }
                len--;
            }
        }

        for (int i = 0; i < len; i++) {
            cout << pmessage[i];
        }

        cout << endl;
    }

}*/
/*
int main()
{
    char quote[] = "Ya ustal, hocju v kino";
    char* pq = quote;

    cout << sizeof(quote) << endl << strlen(pq) + 1 << endl;
}*/

int main() {
    char q[30];
    char* pq = q;
    char b[100];
    char* pb = b;
    int space;
    int* ps = &space;
    int flag = 0;

    for (int i = 0; i < 30; i++) {
        *ps = rand() % 5;
        if(*ps == 1){ pq[i] = char(32); }
        else {
            pq[i] = char(rand() % 26 + 65); //внутри char получаем рандомное значение
        }
        cout << pq[i];
    }
    cout << endl << endl;
    for (int i = 0; i < 30; i++) {
        if (pq[i] == char(32)) { pb[i] = char(9);}
        cout << pq[i];
     //   else { if (flag == 0)pb[i] = pq[i]; else if (flag > 0) { pb[i * flag] = pb[i]; } }
     //   cout << pq[i];
    }
}