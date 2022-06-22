#include "student.h"
#include "group.h"

student::student()
{
}

student::student(student& mem)
{
	global_id_counter = mem.global_id_counter;
	student_id = mem.student_id;

	for (int i = 0; i < 255; i++) {
		surname[i] = mem.surname[i];
		name[i] = mem.name[i];
	}

	group_id = mem.group_id;
	perfomance[1] = mem.perfomance[1];

}

student::student(std::string srname, std::string nme, size_t gp_id)
{
	student_id = global_id_counter + 1;
	global_id_counter + 1;

	size_t srname_size = srname.length();
	size_t nme_size = nme.length();

	for (int i = 0; i < srname_size; i++) {
		surname[i] = srname[i];
	}
	for (int i = 0; i < nme_size; i++) {
		name[i] = nme[i];
	}
	group_id = gp_id;
}

double student::average_perf()
{
	double answer = 0;
	for (int i = 0; i < 5; i++) {
		answer += perfomance[i];
	}
	answer / 5;
	return answer;
}

void student::show_student()
{
	std::cout << "------------ "<<student_id <<" ---------------" << std::endl;
	std::cout << "Surname: " << surname << "\n" << "Name: " << name << "\n" << "Group ID: " << group_id << "\n" << "Average Perfomance" << average_perf() << std::endl;
}
