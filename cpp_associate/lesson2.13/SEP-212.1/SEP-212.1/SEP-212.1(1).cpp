#include <iostream>
#include "book.h"
#include "book_shelf.h"

int main()
{
	setlocale(LC_ALL, "ru");

	book_shelf shelf;
	book first("Убить пересмешника", "Харпер Ли");
	shelf.add(first);
	shelf.add(book("Гордость и предубеждение", "Джейн Остен"));
	shelf.add(book("Дневник Анны Франк", "Анна Франк"));
	shelf.add(book("1984", "Джордж Оруэлл"));
	shelf.add(book("Гарри Поттер и философский камень", "Джоан Роулинг"));
	std::cout << shelf << std::endl;
	std::cout << "---------------------" << std::endl;

	shelf.remove(first);
	std::cout << shelf << std::endl;

	return 0;
}