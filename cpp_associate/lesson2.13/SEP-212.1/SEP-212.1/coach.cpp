#include "coach.h"

coach::coach(const char* nm, const char* thr, const char* grp)
{
	name = nm;
	surname = thr;
	group_num = grp;
}

std::string coach::get_name()
{
	return name;
}

std::string coach::get_surname()
{
	return surname;
}

bool coach::equal(const coach bk)
{
	return name == bk.name && surname == bk.surname && group_num == bk.group_num;
}

std::ostream& operator<<(std::ostream& os, const coach& bk)
{
	os << "<" << bk.name << "> - <" << bk.surname << ">";
	return os;
}
