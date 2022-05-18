#ifndef _s_list_h
#define _s_list_h

#include <iostream>

/**
Структура как элемент списка и хранения данных.
*/
template<class T>
struct node
{
	T data;			// Данные
	node<T>* next;	// Адрес следующего элемента списка
	node() : next(nullptr) {}
};

/**
Реализация класса итератора для организации доступа
к элементам контейнера.
*/
template<class T>
class s_iterator
{
	node<T>* ptr;
public:
	s_iterator() : ptr(nullptr) {}
	s_iterator(node<T>* ptr) : ptr(ptr) {}
	s_iterator& operator++() { ptr = ptr->next; return *this; }
	T& operator*() const { return ptr->data; }
	node<T> operator->() { return ptr; }
	bool operator!=(const s_iterator& obj) const { return ptr != obj.ptr; }
	~s_iterator() { ptr = nullptr; }
};

/**
Описание класса списка.
*/
template<class T>
class s_list {
	node<T>* first;									// адрес первого элемента списка
	node<T>* last;									// адрес последнего элемента списка
public:
	friend class s_iterator<T>;						// включение класса итератора
	s_list();										// конструктор по умолчанию
	s_list(const s_list<T>& obj);					// конструктор копирования
	s_list(s_list<T>&& obj);						// конструктор перемещения
	s_list<T>& operator=(const s_list<T>& obj);		// оператор равно копированием
	s_list<T>& operator=(s_list<T>&& obj);			// оператор равно перемещением
	T& operator[](size_t pos) const;				// оператор индексирования

	void add_to_head(const T& data);				// добавление элемента в начало 
	void add_to_tail(const T& data);				// добавление элемента в конец 
	T front() const;								// возвращает первое значение
	T back() const;									// возвращает последнее значение
	T delete_from_head();							// удаление первого элемента
	T delete_from_tail();							// удаление последнего элемента
	void delete_all();								// удаление всех элементов
	void show() const;								// отображение всех элементов
	size_t size() const;							// количество элементов

	s_iterator<T> begin() const;					// возвращает итератор на первый элемент
	s_iterator<T> end() const;						// возвращает итератор на элемент, следующий за последним

	void insert_at(size_t pos, const T& data);		// вставка в указанную позицию
	void delete_at(size_t pos);						// удаление по указанной позиции
	size_t find(const T& data) const;				// поиск элемента (NULL в случае неудачи)
	size_t find_and_replace(const T& data, const T& repl_data);	// поиск и замена всех элементов (возвращаем кол-во замен)
	void reverse();									// переворот списка

	void sort();									// сортирует элементы (вставками)
	void splice(s_list<T>& obj);					// перемещает элементы из другого list 

	~s_list();										// деструктор
private:
	void add_to_head(node<T>* ptr);					// добавляет ноду в голову списка
	void add_to_tail(node<T>* ptr);					// добавляет ноду в конец списка
};



template<class T>
inline void s_list<T>::insert_at(size_t pos, const T& data)
{
	size_t index{ 0 };
	node<T>* temp{this->first};
	while (temp)
	{
		if (index == pos) {
			node<T>* newnode = new node<T>();
			newnode->data = data; // требуется для типа данных T реализовать оператор копирования
			newnode->next = node->next;
			temp->next = newnode;
			break;
		}
		index++;
		temp = temp->next;
	}
	/*
	for (temp{first}; temp; temp->next)
	{

	}*/
}

template<class T>
inline void s_list<T>::delete_at(size_t pos)
{
	size_t index{ 0 };
	node<T>* moveon;
	node<T>* temp{ this->first };
	while (temp)
	{
		if (temp++ = pos) {
			moveon = temp;
		}
		else if (temp == pos) {
			moveon->next = temp->next;
		}
		index++;
		temp = temp->next;
	}
}

template<class T>
inline size_t s_list<T>::find(const T& data) const
{
	node<T>* temp{ this->first };
	int answer = NULL;
	while (temp)
	{
		if (temp == data) answer == 1; break;
		temp = temp->next;
	}
	return answer();
}

template<class T>
inline size_t s_list<T>::find_and_replace(const T& data, const T& repl_data)
{
	size_t count{ 0 };
	node<T>* temp{ this->first };

	while (temp)
	{
		if (temp->data == data) {
			temp->data = repl_data;
			count++;
		}
		temp = temp->next;
	}
	return count;
}

template<class T>
inline void s_list<T>::reverse()
{
	s_list<T> reverce;
	node<T>* temp{ this->first };

	while (temp)
	{
		reverce.add_to_head(temp);
		temp = temp->next;
	}
}

template<class T>
inline void s_list<T>::sort()
{
	node<T>* temp{ this->first };

	while (temp)
	{
		node<T>* temp2{ this->first };

		while (temp2)
		{
			if (temp->data > temp2->data) {
				T mem = temp->data;
				temp->data = temp2->data;
				temp2->data = mem;

			}
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
}

template<class T>
inline void s_list<T>::splice(s_list<T>& obj)
{
	node<T>* temp{ obj->first };

	while (temp)
	{
		this->add_to_tail(temp);
		temp = temp->next;
	}
}

template<class T>
inline s_list<T>::~s_list()
{
}

template<class T>
inline s_list<T>::s_list() : first(nullptr), last(nullptr)
{
}

template<class T>
inline s_list<T>::s_list(const s_list<T>& obj)
{
	node<T>* temp{ obj->first };

	while (temp)
	{
		this->add_to_tail(temp);
		temp = temp->next;
	}
}

template<class T>
inline s_list<T>::s_list(s_list<T>&& obj)
{
	this->first = obj.first;
	this->last = obj.last;
	obj.first(nullptr); obj.last(nullptr);
}

template<class T>
inline s_list<T>& s_list<T>::operator=(const s_list<T>& obj)
{
	node<T>* temp{ obj->first };

	while (temp)
	{
		add_to_tail(temp);
		temp = temp->next;
	}
}

template<class T>
inline s_list<T>& s_list<T>::operator=(s_list<T>&& obj)
{
	this->first = obj.first;
	this->last = obj.last;
	obj.first(nullptr); obj.last(nullptr);
}

template<class T>
inline T& s_list<T>::operator[](size_t pos) const
{
	size_t index{ 0 };
	
	node<T>* answer_link;
	node<T>* temp{ this->first };
	while (temp)
	{
		if (index == pos) {
			answer_link = temp;
		}
		index++;
		temp = temp->next;
	}
	node<T> answer = &answer_link;
	return answer;
}

template<class T>
inline void s_list<T>::add_to_head(const T& data)
{
	node<T> newnode;
	node<T>* newnodelink = &newnode;
	newnodelink->next = this->first;
	newnodelink->data = data;
	this->first = newnodelink;
}

template<class T>
inline void s_list<T>::add_to_tail(const T& data)
{
	node<T>* newnode;
	newnode->data = data;
	newnode->next = nullptr;
	this->last->next = newnode;
	this->last = newnode;
}

template<class T>
inline T s_list<T>::front() const
{
	node<T>* newnode = this->first;
	return newnode();
}

template<class T>
inline T s_list<T>::back() const
{
	node<T>* newnode = this->last;
	return newnode();
}

template<class T>
inline T s_list<T>::delete_from_head()
{
	node<T>* newnode = this->first;
	this->first = newnode->next;
	return newnode();
}

template<class T>
inline T s_list<T>::delete_from_tail()
{
	node<T>* newnode = this->last;
	node<T>* temp = this->first;
	size_t sz = this->size;
	while (temp < sz-1)
	{
		temp++;
		if (temp == this->last) {
			temp = nullptr;
		}
	}
	return newnode();
}

template<class T>
inline void s_list<T>::delete_all()
{
	this->first = nullptr;
	this->last = nullptr;
}

template<class T>
inline void s_list<T>::show() const
{
	size_t index{ 0 };
	node<T>* temp{ this->first };
	while (temp)
	{
		std::cout << "index: " << index << " data: " << temp->data << std::endl;
		index++;
		temp = temp->next;
	}
}

template<class T>
inline size_t s_list<T>::size() const
{
	size_t index{ 0 };
	node<T>* temp{ this->first };
	while (temp)
	{
		index++;
		temp = temp->next;
	}
	return index++;
}

template<class T>
inline s_iterator<T> s_list<T>::begin() const
{
	s_iterator<T> ptr = first;
	return ptr;
}

template<class T>
inline s_iterator<T> s_list<T>::end() const
{
	s_iterator<T> ptr = last;
	return ptr;
}

#endif

template<class T>
inline void s_list<T>::add_to_head(node<T>* ptr)
{
	ptr->next = this->first;
	this->first = ptr;
}

template<class T>
inline void s_list<T>::add_to_tail(node<T>* ptr)
{
	this->last->next = ptr;
	this->last = ptr;
}
