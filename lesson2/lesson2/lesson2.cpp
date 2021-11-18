#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
//	cout << R"(\t\n)" << endl; // how to output \t \n or any of this, if you need to output )", user R"x()x"

/*
	int целочисленный тип данных ------------------------------- 4 bytes
	float числа с плавающей точкой ----------------------------- 4 bytes 
	double большее значение, чем float ------------------------- 8 bytes 
	char символы   --------------------------------------------- 1 byte 
	bool логический (true/false)
	wchar_t расширенный, для другой кодировки символов

	using followed keys to work with variables
	short ------------------------------------------------------ 2 bytes 
	long ------------------------------------------------------- 4 bytes
	long long -------------------------------------------------- 8 bytes 
	long double ------------------------------------------------ 16 bytes
	signed  (-128)
	usigned (128) ---------------------------------------------- 2 bytes
*/
/*	const int a2 = 2;
	int a = 1;
	a = 3;	
	cout << a << endl;
*/
/*
	float a = 1.123456789101112131415161718192021222324252627282930;
	double b = 1.123456789101112131415161718192021222324252627282930;
	long double c = 1.123456789101112131415161718192021222324252627282930;
	cout << a << endl << b << endl << c << endl;
*/
/*
	char a = 'c';
	cout << a << endl;
	bool b = true;
	cout << b << endl;
*/

//simple calculator
/*
	int a, b;
	float c;
	cout << "input your first number: ";
	cin >> a;
	cout << endl << "input your second number:";
	cin >> b;
	c = a / b;
	cout << endl << "summ:" << a + b << endl << "subtraction: " << a - b << endl << "multiplication: " << a * b << endl << "subtraction: " << c << endl;
*/
//starting tasks
/*	float L, S, R;
	cout << "введите радиус окружности: " << endl;
	cin >> R; cout << endl;
	L = 2 * 3.14 * R;
	S = 3.14 * R * R;
	cout << "длина окружности равна: " << L << endl << "площадь окружности равна: " << S << endl;
*/
	float x, a, y, b;
	cout << "введите колличество киллограм конфет: ";
	cin >> x;
	cout << endl << "введите стоимость " << x << " киллограм конфет: ";
	cin >> a;
	cout << "стоимость одного киллограма конфет равна: " << a / x << endl << endl;
	cout << "введите колличество киллограм ирисок: ";
	cin >> y;
	cout << endl << "введите стоимость " << y << " киллограм ирисок: ";
	cin >> b;
	cout << "стоимость одного киллограма ирисок равна: " << b / y << endl << endl;





	return 0;
}

