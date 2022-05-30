#include "group.h"

void group::add(student bk)
{
	group.push_back(bk);
}

void group::remove(student bk)
{
	auto size = group.size();
	std::vector<student> vs;
	for (auto i = 0; i < size; i++)
		if (!group[i].equal(bk))
			vs.push_back(group[i]);
	group = vs;
}

std::ostream& operator<<(std::ostream& os, const group shlf)
{
	auto size = shlf.group_num.size();
	for (auto i = 0; i < size; i++)
		os << shlf.group[i] << std::endl;
	return os;
}
