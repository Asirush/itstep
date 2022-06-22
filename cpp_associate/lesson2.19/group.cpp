#include "group.h"
#include "student.h"

void group::get_sucsess_students()
{
	student memory;
	for (auto it = students.begin(); it != students.end(); it++) {
		
		if (memory.average_perf() > 3) { memory.show_student(); }
	}
}

void group::show_group()
{
	
	for (auto it = students.begin(); it != students.end(); it++) {
		student memory(it);
		memory.show_student();
	}
}
