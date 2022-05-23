#pragma once
#include <iostream>

template<typename type>
class queue {
private:
	type* wait;			//Очередь
	int maxLength;		//Максимальный размер очереди
	int length;			//Текущий размер очереди
	int l, r;           //индекс первого и последнего элемента очереди
public:
	queue();			//Конструктор
	queue(int m);		//Конструктор с размером очереди
	void add(type c);	//Добавление элемента    
	type extract();		//Извлечение элемента
	void clear();		//Очистка очереди
	bool is_empty();	//Проверка существования элементов в очереди
	bool is_full();		//Проверка на переполнение очереди
	int get_count();	//Количество элементов в очереди
	void show();		//демонстрация очереди
	~queue();			//Деструктор                       
};

template<typename type>
inline queue<type>::queue()
{
	new type mass[1];
	wait = *mass[0];
	maxLength = 1;
	l = 0, r = 0;
}

template<typename type>
inline queue<type>::queue(int m)
{
	wait = type* mass[m];
	maxLength = m;
	l = 0, r = 0;
}

template<typename type>
inline void queue<type>::add(type c)
{
	wait[r] = c;
	r++;
}

template<typename type>
inline type queue<type>::extract()
{
	type a = wait[l];
	l++;
	return a;
}

template<typename type>
inline void queue<type>::clear()
{
	l = 0; r = 0;
}

template<typename type>
inline bool queue<type>::is_empty()
{
	if (l == r && r != maxLength) return true;
	else return false;
}

template<typename type>
inline bool queue<type>::is_full()
{
	if (l == r && r == maxLength) return true;
	else return false;
}

template<typename type>
inline int queue<type>::get_count()
{
	int count = 0;
	for (auto i = l; i <= r; i++) {
		count++;
	}
	return count;
}

template<typename type>
inline void queue<type>::show()
{
	for (auto i = l; i <= r; i++) {
		std::cout << i << ": " << wait[i] << std::endl;
	}
}

template<typename type>
inline queue<type>::~queue()
{
	delete[] wait;
	delete[] maxLength;
	delete[] l, r, length;
}
