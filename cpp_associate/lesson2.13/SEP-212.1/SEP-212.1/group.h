#pragma once
#include<iostream>
#include<vector>
#include"student.h"
#include"coach.h"

class group
{
	std::vector<student> students;
	std::vector<coach> group_coach;
public:
	void add(student bk);
	void remove(student bk);
	void add_coach(coach bk);
	void remove_coach(coach bk);
	friend std::ostream& operator<<(std::ostream& os, const student shlf);
};

