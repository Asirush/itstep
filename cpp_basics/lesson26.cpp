#include <iostream>
#include <cmath>

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

}