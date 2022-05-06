#include "my_string.h"
#include <iostream>

/**
Класс контейнер, предоставляющий инструменты для работы со строками.
Учебная реализация основанная на базовом классе.
http://www.cplusplus.com/reference/string/string/
*/

my_string::my_string()
{
	this->str = nullptr;
}

my_string::my_string(const char* str)
{
	size_t size = strlen(str);
	this->str = new char[size + 1];
	strcpy_s(this->str, size + 1, str);
}

my_string::my_string(const my_string& obj)
{
	size_t size = strlen(obj.str);
	this->str = new char[size + 1];
	strcpy_s(this->str, size + 1, obj.str);
}

my_string::my_string(my_string&& obj)
{
	this->str = obj.str;
	obj.str = nullptr;
}

my_string::~my_string()
{
	if(this->str){ delete[] this->str; }
}

inline size_t my_string::length() const
{
	return strlen(this->str);
}

const char my_string::at(size_t pos) const
{
	return this->str[pos];
}

void my_string::push_back(char ch)
{
	this->str[strlen(str) + 1] = ch;
}

size_t my_string::find(const char* str, size_t pos) const
{
	if (this->str) {
		const char* ptr = strstr(this->str + pos, str);
		if (ptr) {
			return ptr - str;
		}
	}
	return npos;
}

size_t my_string::find(const my_string& obj, size_t pos) const
{
	if (this->str) {
		const char* ptr = strstr(this->str + pos, obj.str);
		if (ptr) {
			return ptr - obj.str;
		}
	}
	return npos;
}

int my_string::compare(const char* str) const
{
	int counter = 0;
	size_t size = strlen(this->str);
	for (int i = 0; i < size; i++) {
		if (this->str[i] == str[i]) counter++;
	}
	return counter;
}

int my_string::compare(const my_string& obj) const
{
	int counter = 0;
	size_t size = strlen(this->str);
	for (int i = 0; i < size; i++) {
		if (this->str[i] == obj.str[i]) counter++;
	}
	return counter;
}

void my_string::clear()
{
	if (this->str) { delete[] this->str; }
}

void my_string::replace(size_t pos, size_t len, const char* str)
{
	if (this->str) {
		if (len == npos) {
			strcpy_s(this->str, strlen(this->str) + 1, str+pos);
		}
		else {
			strncpy_s(this->str, strlen(this->str) + 1, str+pos, len);
		}
	}
}

void my_string::replace(size_t pos, size_t len, const my_string& obj)
{
	if (this->str) {
		if (len == npos) {
			strcpy_s(this->str, strlen(this->str) + 1, obj.str + pos);
		}
		else {
			strncpy_s(this->str, strlen(this->str) + 1, obj.str + pos, len);
		}
	}
}

void my_string::swap(my_string&& obj)
{
	char* a = this->str;
	this->str = obj.str;
	obj.str = a;
}

void my_string::copy(const char* str)
{
	size_t size = strlen(str);
	delete[]this->str;
	for (size_t i = 0; i < size; i++){
		this->str[i] = str[i];
	}
}

void my_string::copy(const my_string& obj)
{
	size_t size = strlen(obj.str);
	delete[]this->str;
	for (size_t i = 0; i < size; i++) {
		this->str[i] = obj.str[i];
	}
}

void my_string::pop_back()
{
	size_t size = strlen(this->str);
	this->str[size - 2] = '\0';
}

void my_string::append(const char* str)
{
	const size_t size1 = strlen(this->str); size_t size2 = strlen(str);
	for (size_t i = 0; i < size1 + size2; i++) {
		while (i > size1) {
			this->str[i] = str[i-size1];
		}
	}
}

void my_string::append(const my_string& obj)
{
	const size_t size1 = strlen(this->str); size_t size2 = strlen(obj.str);
	for (size_t i = 0; i < size1 + size2; i++) {
		while (i > size1) {
			this->str[i] = obj.str[i-size1];
		}
	}
}

void my_string::insert(size_t pos, const char* str)
{
	my_string a;
	int len = strlen(this->str) + strlen(str);
	for (auto i = 0; i < len; i++) {
		if (i < pos) {
			a.str[i] = this->str[i];
		}
		else if (i >= pos && i <= strlen(str)) {
			a.str[i] = str[i - pos];
		}
		else {
			a.str[i] = this->str[i - pos];
		}
	}
}

void my_string::insert(size_t pos, const my_string& obj)
{
	size_t size1 = strlen(this->str);
	size_t size2 = strlen(obj.str);
	my_string a;
	for (int i = 0; i < size2; i++) {
		a.str[i] = this->str[pos + i];
	}
	for (size_t i = 0; i < size1 + size2; i++) {
		if (i >= pos && (i - pos) < size2) {
			this->str[i] = obj.str[i];
		}
		else if (i > pos) {
			this->str[i] = a.str[i - size2];
		}
	}
}

void my_string::erase()
{
	str = nullptr;
}


