#pragma once
#include"student.h"
#include<list>

class group
{
private:
	size_t g_group_id;
	std::list <student> students;

public:
	void add_student(size_t grp_id, student a) { students.push_back(a); g_group_id = grp_id; }
	void get_sucsess_students();
	void sort() { students.sort(); }
	void show_group();
};

