// SEP-181.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <list>

#include "nissan.h"
#include "toyota.h"

using namespace std;

/*
Задание.
Создать базовый класс «Домашнее животное» и производные классы «Собака», «Кошка», «Попугай», «Хомяк».
С помощью конструктора установить имя каждого животного и его характеристики. Реализуйте для каждого
из классов функции:
Sound – издает звук животного (пишем текстом в консоль);
Show – отображает имя животного;
Type – отображает название его подвида.
*/

int main() {


	car *sales;
	sales = new nissan(nissan::Cefiro, "January 2018", 100000);
	sales->printCheck();

	cout << endl << endl;


	list<car*> price_list;

	price_list.push_back(new nissan(nissan::Almera, "jan 2018", 1000000.0f));
	price_list.push_back(new toyota(toyota::Camry, "feb 2018", 1100000.0f));
	price_list.push_back(new nissan(nissan::Juke, "mar 2018", 1200000.0f));
	price_list.push_back(new toyota(toyota::LandCruser, "apr 2018", 1300000.0f));

	for (list<car*>::iterator iter = price_list.begin(); iter != price_list.end(); iter++)
		(*iter)->printToString();


	return 0;
}
