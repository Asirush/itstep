#include "student.h"

student::student(const char* nm, const char* thr, const char* grp)
{
	name = nm;
	surname = thr;
	group_num = grp;
}

std::string student::get_name()
{
	return name;
}

std::string student::get_surname()
{
	return surname;
}

bool student::equal(const student bk)
{
	return name == bk.name && surname == bk.surname && group_num == bk.group_num;
}

std::ostream& operator<<(std::ostream& os, const student& bk)
{
	os << "<" << bk.name << "> - <" << bk.surname << ">";
	return os;
}
