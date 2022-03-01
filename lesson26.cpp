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
	char* pmessage;
	char name[] = "Hello World!";
	pmessage = name;
	char output[] = "";
	char* omessage;
	omessage = output;

	int i = 0, j = 0;
	while (true){
		cout << "enter letter u wanna delete: "; cin >> del[j];
		while (*(pmessage + i) != '\0') {
			if (*(pmessage + i) != del) *(omessage + j) = *(pmessage + i);

			i++; j++;
		}
		cout << endl;
	}
}