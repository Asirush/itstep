﻿#include <iostream>

using namespace std;

int main()
{
//homework
/*Задача: В школе решили набрать три новых математических класса. Так как занятия по математике у них проходят в одно и то же время,
было решено выделить кабинет для каждого класса и купить в них новые парты. За каждой партой может сидеть не больше двух учеников.
Известно количество учащихся в каждом из трёх классов. Сколько всего нужно закупить парт чтобы их хватило на всех учеников?
Программа получает на вход три натуральных числа: количество учащихся в каждом из трех классов.*/
	int a, b, c, end;
	setlocale(LC_ALL, "Russian");
	cout << "введите количество парт в первом классе: ";
	cin >> a; cout << endl;
	cout << "введите количество парт во втором классе: ";
	cin >> b; cout << endl;
	cout << "введите количество парт в третьем классе: ";
	cin >> c; cout << endl;
	cout << "общее колличество учеников: " << a + b + c << endl << "Общее количество парт: " << (a + b + c + 1) / 2 << endl;
	cin >> end;
	return 0;
}
