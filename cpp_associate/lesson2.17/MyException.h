#pragma once
#include<iostream>

using namespace std;

class MyException : exception
{
public:
	MyException();
	MyException(const char* str);
	MyException(const MyException& obj);
	MyException& operator=(const exception& obj);
	MyException& operator=(const MyException& obj);
	virtual const char* what() const;
	virtual ~MyException();
private:
	string message;
};

MyException::MyException() {}

MyException::MyException(const char* str) : message(string(str)) {}

MyException::MyException(const MyException& obj) : message(obj.message) {}

MyException& MyException::operator=(const exception& obj)
{
	this->message = string(obj.what());
	return *this;
}

MyException& MyException::operator=(const MyException& obj)
{
	this->message = obj.message;
	return *this;
}

const char* MyException::what() const
{
	return message.c_str();
}

MyException::~MyException() {}
