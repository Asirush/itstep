#include "group.h"

void group::add(student bk)
{
	students.push_back(bk);
}

void group::remove(student bk)
{
	auto size = students.size();
	std::vector<student> vs;
	for (auto i = 0; i < size; i++)
		if (!students[i].equal(bk))
			vs.push_back(students[i]);
	students = vs;
}

void group::add_coach(coach bk)
{
	group_coach.push_back(bk);
}

void group::remove_coach(coach bk)
{
	auto size = group_coach.size();
	std::vector<coach> vs;
	for (auto i = 0; i < size; i++)
		if (!group_coach[i].equal(bk))
			vs.push_back(group_coach[i]);
	group_coach = vs;
}

std::ostream& operator<<(std::ostream& os, const student shlf)
{
	auto size = shlf.coach.size();
	for (auto i = 0; i < size; i++)
		os << shlf.coach[i] << std::endl;

	auto size = shlf.students.size();
	for (auto i = 0; i < size; i++)
		os << shlf.students[i] << std::endl;
	return os;
}
