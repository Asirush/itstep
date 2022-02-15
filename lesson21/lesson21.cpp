#include <iostream>
#include <stdlib.h>
#include <Windows.h>

/*
Sleep(2000);
system("cls");
*/

using namespace std;

/*
string words(string a, string b) {
    return a + " " + b;
}


int main()
{
    string word1, word2;
    cin >> word1 >> word2;
    cout << words(word1, word2) <<endl;

    return 0;
}
*/
/*
string counter(string location, int count_of_trips) {
    int flag = 0;
    string current_place;
    //Home - 1
    //School - 2
    

    if (location == "Home") {
        for (int i = count_of_trips; i >= 1; i--) {
            if (count_of_trips % 2 == 0) { current_place = "Home"; }
            else { current_place = "School"; }
        }
        
        
    }
    else {
        for (int i = count_of_trips; i >= 1; i--) {
            if (count_of_trips % 2 == 1) { current_place = "Home"; }
            else { current_place = "School"; }
        }
    }
    return "Вы находитесь: " + current_place + ". Поездок осталось: 0.";
}

int main() {
    setlocale(LC_ALL, "Russian");

    string word; int count; 
    cout << "Input where you are and how many trips you have in one card? "; cin >> word >> count;
    int days = count / 2;
    cout << counter(word, count) << " Дней пройдено " << days << endl;
    return 0;
}*/
/*
bool isunsigned(int a) {
    if (a > 0) { return true; }
    else { return false; }
}

int main() {
    int a;
    cin >> a;
    cout << isunsigned(a) << endl;

    return 0;
}*/

int maxel(int n; int array[];) {
    max = array[0];
    int max, min, mxnumber, mnnumber;
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            mxnumber = i;
        }
        if (array[i] < min) {
            min = array[i];
            mnnumber = i;
        }

    }

    return max, min, ;
}
//hello
int main() {
    cout << "Enter your array: " << endl;
    int array[10];
    for (int i = 0; i <= 10; i++) {
        cout << "number " << i + 1; cin >> array[i];
    }
    cout << maxel(int 10; array[10])

    return 0;
}