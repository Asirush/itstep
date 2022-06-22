#pragma once
#include <iostream>
#include <string>
#include "group.h"
class student
{
private:
	int global_id_counter = 0;
	size_t student_id;
	char surname[255];
	char name[255];
	size_t group_id;
	size_t perfomance[5];
	

public:
	student();
	student(student& mem);
	student(std::string srname, std::string nme, size_t gp_id);
	void set_perfomance(int a, int b, int c, int d, int e) { perfomance[0] = a; perfomance[1] = b; perfomance[2] = c;	perfomance[3] = d;	perfomance[4] = e;}
	bool operator<(const student& obj) { return average_perf() < obj.average_perf(); }
	double average_perf(); 
	void show_student();
};

