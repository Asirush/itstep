#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int end;

//homework
	/*
	int a;
	cout << "Введите номер месяца: "; cin >> a; 
	if (a >= 1 && a <= 2 || a == 12) { cout << "Время года - зима" << endl; }
	else if (a >=3 && a <= 5) { cout << "Время года - весна" << endl; }
	else if (a >= 6 && a <= 8) { cout << "Время года - лето" << endl; }
	else if (a >= 9 && a <= 11) { cout << "Время года - осень" << endl; }
	*/
	//task1
	/*
	//счастливый билет - сумма первых трех чисел равен сумме второй троицы
	int n1, n2, n3, n4, n5, n6, input_n1;
	cout << "Введите номер билета: "; cin >> input_n1; cout << endl;
	n1 = input_n1 / 100000;
	n2 = (input_n1 / 10000) % 10;
	n3 = (input_n1 / 1000) % 10;
	n4 = (input_n1 / 100) % 10;
	n5 = (input_n1 / 10) % 10;
	n6 = (input_n1 / 1) % 10;
	//cout << n1 << endl <<n2 << endl <<n3 << endl <<n4 << endl <<n5 << endl <<n6<< endl;
	if ((n1 + n2 + n3) == (n4 + n5 + n6)) { cout << "Поздравляем! Ваш билет счастливый!" << endl; }
	else { cout << "Сегодня Вам не повезло(((" << endl; }
	*/
	//Неявное и явное преобразование переменных
	/*
	* неявное 
	* float a = 1.35;
	* int b = a;
	* 
	* явное 
	* int number = 97;
	* char symbol;
	* symbol = (char)number;
	* 
	* float c = static_cast<int>(a); //making a from float to int*/
	//task2

	int hh, mm, b, c, hh_out, mm_out;
	cout << "Введите время начала пути: "; cin >> hh>>mm; cout << endl;
	cout << "Введите количество часов в пути: ";  cin >> b; cout << endl;
	cout << "Введите количество минут в пути: ";  cin >> c; cout << endl;
	if ((mm + c) >= 60) 
	{
		hh += 1; mm_out = (mm + c) % 60;
	 if ((hh + b) >= 24) { hh_out = (hh + b) % 24; }
	 else { hh_out = hh + b; }
	}
	else {
		mm_out = mm + c;
		if ((hh + b) >= 24) { hh_out = (hh + b) % 24; }
		else { hh_out = hh + b; }
	}
	cout << "Время по приезде: " << hh_out << ":" << mm_out << endl;


	cin >> end;
	return 0;
}

