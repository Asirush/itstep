#include <iostream>
#include <math.h>
#include <cstdlib>


using namespace std;

/*
int main()
{
    //указатели
    int a = 24;
    int* pa = &a;

    cout << "a = " << a << endl << "p address: " << pa << endl << "p meaning: " << *pa << endl;
    //        24                      009DF9E8                         24    


    //указатели на массив
    char name[6] = {'A','L','E','X','E','Y'};
    
    //как записать массив
    char* pname = &name[0];
    char* pname = name;

    //как вывести массив
    for(int i = 0; i < 6; i++){
        cout << n[i] << endl;
        cout << *(n+i) << endl;
        }
}
*/

//task 1

void manual_delete(int mass[], int a) {
    int* p = &mass[0];
    *(p+a-1) = 0;
}

void wariable_delete(int mass[20], char a) {
    int* p = mass;
    if (a == '+') {
        for (int i = 0; i < 20; i++) {
            if (*(p + i) % 2 == 1) {
                *(p + i) = 0;
            }
        }
    }
    if (a == '-') {
        for (int i = 0; i < 20; i++) {
            if (*(p + i) % 2 == 0) {
                *(p + i) = 0;
            }
        }
    }
}
    
void cout_mass(int mass[]) {
    system("cls");
    for (int i = 0; i < 20; i++) {
        
        cout << "mass " << i + 1 << ": " << mass[i] << endl;
    }
}

void clean_mass(int mass[]) {
    int* p = mass;
    for (int j = 0; j < 20; j++) {
        for (int i = 0; i < 20; i++) {
            if (*(p + i) == 0) { *(p + i) = *(p + i + 1); *(p + i + 1) = 0; }
        }
    }
}

int main(){
    int mass[20], c;  char a; string b;

    for (int i = 0; i < 20; i++) {
        mass[i] = rand() % 8 + 1;
    }

    cout_mass(mass);

    cout << "enter '+' for 1,3... and '-' for 2,4,6... "; cin >> a;

    wariable_delete(mass, a); 
    clean_mass(mass);

    cout_mass(mass);

    cout << "wish to delete objects manualy?(y/n) "; cin >> b;
    if (b == "y") {
        cout_mass(mass);
        cout <<endl<< "what is number ud like to delete? "; cin >> c;
        manual_delete(mass, c);
        clean_mass(mass);
        cout_mass(mass);

        return 0;
    }
}
