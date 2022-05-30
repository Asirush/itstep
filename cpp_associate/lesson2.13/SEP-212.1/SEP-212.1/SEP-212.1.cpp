#include <iostream>
#include "student.h"
#include "group.h"

int main()
{
	setlocale(LC_ALL, "ru");

	group SEP;
	student first("Дмитрий", "Доценко", "SEP-212.1");
	SEP.add(first);
	SEP.add(student("Бексултан", "Серик", "SEP-212.1"));
	SEP.add(student("Алимжан", "Аманбаев", "SEP-212.1"));
	SEP.add(student("Динмухаммед", "Бексултанов", "SEP-212.1"));
	SEP.add(student("Владислав", "Костенко", "SEP-212.1"));
	std::cout << SEP << std::endl;
	std::cout << "---------------------" << std::endl;

	SEP.remove(first);
	std::cout << SEP << std::endl;

	return 0;
}