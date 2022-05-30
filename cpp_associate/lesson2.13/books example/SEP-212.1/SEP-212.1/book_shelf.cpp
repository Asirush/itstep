#include "book_shelf.h"

void book_shelf::add(book bk)
{
	books.push_back(bk);
}

void book_shelf::remove(book bk)
{
	auto size = books.size();
	std::vector<book> vs;
	for (auto i = 0; i < size; i++)
		if (!books[i].equal(bk))
			vs.push_back(books[i]);
	books = vs;
}

std::ostream& operator<<(std::ostream& os, const book_shelf shlf)
{
	auto size = shlf.books.size();
	for (auto i = 0; i < size; i++)
		os << shlf.books[i] << std::endl;
	return os;
}
