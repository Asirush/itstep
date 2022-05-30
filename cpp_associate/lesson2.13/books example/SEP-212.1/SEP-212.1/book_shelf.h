#pragma once
#include<iostream>
#include<vector>
#include"book.h"

class book_shelf
{
	std::vector<book> books;
public:
	void add(book bk);
	void remove(book bk);
	friend std::ostream& operator<<(std::ostream& os, const book_shelf shlf);
};

