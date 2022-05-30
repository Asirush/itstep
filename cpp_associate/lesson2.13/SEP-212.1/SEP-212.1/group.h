#pragma once
#include<iostream>
#include<vector>
#include"student.h"

class group
{
	std::vector<student> group;
public:
	void add(student bk);
	void remove(student bk);
	friend std::ostream& operator<<(std::ostream& os, const student shlf);
};

