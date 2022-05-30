#include "book.h"

book::book(const char* nm, const char* thr)
{
	name = nm;
	author = thr;
}

std::string book::get_name()
{
	return name;
}

std::string book::get_author()
{
	return author;
}

bool book::equal(const book bk)
{
	return name == bk.name && author == bk.author;
}

std::ostream& operator<<(std::ostream& os, const book& bk)
{
	os << "<" << bk.name << "> - <" << bk.author << ">";
	return os;
}
