#include "group.h"
#include "student.h"
#include<iostream>

int main() {
	student one("Firstsurname", "Firstname", 1);
	student two("Secondsurname", "Secondname", 1);
	student three("Thirdsurname", "Thirdname", 1);
	student four("Fourthsurname", "Fourthname", 1);
	student five("Fifthsurname", "Fifthname", 1);

	group group_1;
	group_1.add_student(1,one);
	groud_1.add_student(1,two);
	groud_1.add_student(1,three);
	groud_1.add_student(1,four);
	groud_1.add_student(1,five);

	return 0;
}