#pragma once
#include <iostream>

using namespace std;

class MyArray
{
public:
	MyArray();
	explicit MyArray(const size_t size);
	MyArray(const MyArray& obj);
	MyArray(MyArray&& obj);
	MyArray operator=(const MyArray& obj);
	MyArray operator=(MyArray&& obj);
	MyArray operator+ (const MyArray& obj) const;
	void begin(); // i = 0
	bool end() const; // i < size
	void next(); // i ++
	int	get() const; // показывает данные из нужной ячейки
	void set(const int data, const size_t pos = 0); // подставляет данные в нужную ячейку
	void resize(const size_t new_size); // создать новый массив + скопировать то, что влезло
	void revers(); // бинарная сортировка
	void sort(); // сортировка
	size_t lenght() const; //длина массива
	friend ostream& operator<< (ostream& os, const MyArray obj);
	//friend - в данном случае подразумевается доверие
	~MyArray();
private:
	size_t size;
	int* masiv;
	size_t index;
};

