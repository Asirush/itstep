#pragma once
#include <iostream>

constexpr auto PAGE_SIZE = 5;
constexpr auto MAX_ELEM_PER_PAGE(size_t tsize) { return (tsize / PAGE_SIZE + 1) * PAGE_SIZE; }

template <class T>
class myvector
{
private:
	T* array_buffer;
	size_t size;
public:
	//Конструкторы
	myvector();
	myvector(const size_t size);
	// Копирование
	myvector(const myvector& obj);
	myvector<T>& operator= (const myvector<T>& obj);
	// Перенос
	myvector(const myvector&& obj);
	myvector<T>& operator= (myvector<T>&& obj);

	myvector<T>& operator+= (myvector<T>& obj);
	T operator[](size_t count);

	bool empty() const; // Проверяет заполнен ли вектор.
	const size_t csize() const; // Возвращает количество данных.
	size_t max_size() const; // Возвращает количество данных до перевыделения памяти.
	void resize(const size_t size); // Изменяет размер массива и данных.
	void erase(); // Очищает данные из массива.
	void swap(myvector<T>& obj); // Обменивает данные в объектах.

	void push_back(const T& data); // Добавления нового элемента в конец вектора
	void pop_back(); // Удалить последний элемент

	void push_front(const T& data); // Добавления нового элемента в начало вектора
	void pop_front(); // Удалить первый элемент

	// Оператор потока
	template <class U>
	friend std::ostream& operator<< (std::ostream& os, const myvector<U>& obj);

	~myvector(); // Деструктор
};

template<class T>
inline myvector<T>::myvector()
{
	array_buffer = nullptr;
	size = PAGE_SIZE;
}

template<class T>
inline myvector<T>::myvector(const size_t size)
{
	array_buffer = nullptr;
	this->size = size;
}

template<class T>
inline myvector<T>::myvector(const myvector& obj)
{
	this->size = obj.size;
	this->array_buffer = obj.array_buffer;
}

template<class T>
inline myvector<T>& myvector<T>::operator=(const myvector<T>& obj)
{
	// // O: insert return statement here
	this->size = obj.size;
	this->array_buffer = obj.array_buffer;
}

template<class T>
inline myvector<T>::myvector(const myvector&& obj)
{
	if (this->size) {
		obj.size = this->size;
		obj.array_buffer = this->array_buffer;
	}
	else {
		this->size = obj.size;
		this->array_buffer = obj.array_buffer;
	}
}

template<class T>
inline myvector<T>& myvector<T>::operator=(myvector<T>&& obj)
{
	if (this->size) {
		obj.size = this->size;
		obj.array_buffer = this->array_buffer;
	}
	else {
		this->size = obj.size;
		this->array_buffer = obj.array_buffer;
	}
}

template<class T>
inline myvector<T>& myvector<T>::operator+=(myvector<T>& obj)
{
	new myvector<T> a;
	a.size = this->size + obj.size;
	for (int i = 0; i <= a.size; i++) {
		if (i <= this->size) {
			a.array_buffer[i] = this->array_buffer[i];
		}
		else {
			a.array_buffer[i] = obj.array_buffer[i - this->size];
		}
	}
	return a;
}

template<class T>
inline T myvector<T>::operator[](size_t count)
{
	return T();
}

template<class T>
inline bool myvector<T>::empty() const
{
	int stat = 0;
	for (auto i = 0; i < this->size; i++) {
		if (this->array_buffer[i] != 0) { stat++; }
	}
	return stat;
}

template<class T>
inline const size_t myvector<T>::csize() const
{
	size_t counter = 0;
	for (auto i = 0; i < this->size; i++) {
		if (this->array_buffer[i]) counter++;
	}
	return counter;
}

template<class T>
inline size_t myvector<T>::max_size() const
{

	return size_t();
}

template<class T>
inline void myvector<T>::resize(const size_t size)
{
	this->size = size;
}

template<class T>
inline void myvector<T>::erase()
{
	this->size = 0;
}

template<class T>
inline void myvector<T>::swap(myvector<T>& obj)
{
	if (this->size > obj.size) {
		size_t a = obj.size;
		T* b;
		for (size_t i = 0; i < obj.size; i++) {
			b[i] = obj.array_buffer[i];
		}
		
		obj.size = this->size;
		obj.array_buffer = this->array_buffer;

		this->array_buffer = b;
		this->size = a;
	}
	else {
		size_t a = this->size;
		T* b;
		for (size_t i = 0; i < this->size; i++) {
			b[i] = this->array_buffer[i];
		}

		this->size = obj.size;
		this->array_buffer = obj.array_buffer;

		obj.array_buffer = b;
		obj.size = a;
	}
}

template<class T>
inline void myvector<T>::push_back(const T& data)
{
	this->array_buffer[this->size + 1] = data;
}

template<class T>
inline void myvector<T>::pop_back()
{
	this->size--;
}

template<class T>
inline void myvector<T>::push_front(const T& data)
{
	for (int i = this->size; i >= 0; i--) {
		this->array_buffer[i] = this->array_buffer[i - 1];
	}
	this->array_buffer[0] = data;
}

template<class T>
inline void myvector<T>::pop_front()
{
	for (int i = 1; i < this->size - 1; i++) {
		this->array_buffer[i] = this->array_buffer[i + 1];
	}
}

template<class T>
inline myvector<T>::~myvector()
{
	delete[]this->array_buffer;
}

template<class U>
inline std::ostream& operator<<(std::ostream& os, const myvector<U>& obj)
{
	// // O: insert return statement here
	if (obj.array_buffer) {
		for (auto i = 0; i < obj.size; i++) {
			os << obj.array_buffer[i] << " ";
		}
		return os;
	}
}

