#include "book.h"
#include <string.h>

book::book() : author(nullptr), name(nullptr)
{
	//author = nullptr;
	//name = nullptr;
	publishing_house = nullptr;
	year = 2000;
	number_pages = 0;
}

book::~book()
{
	//read about RAII technology
	if (author) { //in boolean variables all meanings except 0 means true by default
		delete[] author;
	}
	if (name) {
		delete[] name;
	}
	if (publishing_house) {
		delete[] publishing_house;
	}
}

book::book(const book& tmp) //cpying from one object to another, needed only if you use *ukazatel'
{
	size_t size = strlen(tmp.author);
	this->author = new char[size + 1]; // now compiller understand that parametr author and public variable author is not the same thing
	strcpy_s(this->author, size + 1, tmp.author);

	size = strlen(tmp.name);
	this->name = new char[size + 1]; // now compiller understand that parametr author and public variable author is not the same thing
	strcpy_s(this->name, size + 1, tmp.name);

	size = strlen(tmp.publishing_house);
	this->publishing_house = new char[size + 1]; // now compiller understand that parametr author and public variable author is not the same thing
	strcpy_s(this->publishing_house, size + 1, tmp.publishing_house);

	this->year = tmp.year;

	this->number_pages = tmp.number_pages;
}

book::book(const char* author, const char* name, const char* publishing_house, unsigned short year, unsigned short number_pages)
{
	size_t size = strlen(author);
	this->author = new char[size + 1]; // now compiller understand that parametr author and public variable author is not the same thing
	strcpy_s(this->author, size+1, author);

	size = strlen(name);
	this->name = new char[size + 1]; // now compiller understand that parametr author and public variable author is not the same thing
	strcpy_s(this->name, size + 1, name);
	
	size = strlen(publishing_house);
	this->publishing_house = new char[size + 1]; // now compiller understand that parametr author and public variable author is not the same thing
	strcpy_s(this->publishing_house, size + 1, publishing_house);

	this->year = year;

	this->number_pages = number_pages;
}

book::book(unsigned short number_pages) : book() // give for a default constructor posibility to set a year
{
	this->number_pages = number_pages;
}