#pragma once
#include <iostream>

template<typename type>
class stack {
	type* data;				// Массив для хранения данных
	int _top;				// Указатель на вершину стека
public:
	stack();					// Конструктор по умолчанию
	stack(int size);			// Конструктор для инициализации размера стека
	stack(const stack& st);		// Конструктор копирования
	stack(stack&& st);			// Конструктор переноса

	bool empty()const;			// Пустой стек?						
	void push(type& val);		// Добавление элемента в конец стека
	void push(type&& val);		// Перенос элемента в конец стека
	int size()const;			// Количество элементов в стеке
	void pop();					// Удаление последнего элемента в стеке
	const type& top()const;		// Возврат последнего элемента в стеке
	void swap(stack& val);		// Обмен 2х стеков местами

	~stack();					// Деструктор
};

template<typename type>
inline stack<type>::stack()
{
	data = new template<typename type>[1];
}

template<typename type>
inline stack<type>::stack(int size)
{
	data = new template<typename type>[size];
}

template<typename type>
inline stack<type>::stack(const stack& st)
{
	size_t data_size = st.data.size();
	for (size_t i = 0; i < data_size; i++) {
		data[i] = st.data[i];
	}
}

template<typename type>
inline stack<type>::stack(stack&& st)
{
	data = st.data;
	delete[] st;
}

template<typename type>
inline bool stack<type>::empty() const
{
	if (_top) return true;
	else return false;
}

template<typename type>
inline void stack<type>::push(type& val)
{
	data[_top++] = val;
	_top++;
}

template<typename type>
inline void stack<type>::push(type&& val)
{
	for (size_t i = 0; i < _top; i++) {
		if (data[i] == val) {
			template<typename type> mem = data[i];
			int flag = i;
			while (flag != _top--) {
				data[flag] = data[flag++];
				flag++;
			}
			data[_top] = mem;
		}
	}
}

template<typename type>
inline int stack<type>::size() const
{
	int i = 0, answer;
	while (data[i]) {
		answer++;
	}
	return answer;
}

template<typename type>
inline void stack<type>::pop()
{
	_top--;
}

template<typename type>
inline const type& stack<type>::top() const
{
	_top++;
}

template<typename type>
inline void stack<type>::swap(stack& val)
{
	type* mem = data;
	data = val.data;
	val.data = mem;
}

template<typename type>
inline stack<type>::~stack()
{
	delete[] data;
	delete[] _top;
}
