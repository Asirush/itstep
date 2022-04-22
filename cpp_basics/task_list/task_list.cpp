#include <iostream>
#include <Windows.h>
#include <cmath>
#include <windows.h>
#include <string.h>
#include <string>
#include <fstream>
using namespace std;

int task_count = 0;
int* tc = &task_count;
ofstream myfile;

struct date {
	int day;
	int month;
	int year;
	int hour;
	int minutes;
};

struct task{
	string name;
	int priority;
	string description;
	date time;
};

//create array
task tasks[999];
date dates_select[999];

int welcommen() {
	system("cls");
	cout << "Please select what to do:" << endl << "1. Show my task list" << endl;
	cout << "2. Add new task" << endl << "3. Edit task" << endl << "4. Search task" << endl;
	int a; cin >> a;
	return a;
}

void show_todolist() {
	int exit_but = 0; char answer;
	while (exit_but == 0) {
		system("cls");
		cout << "To do list" << endl;
		cout << "num|  task name |      time       |  priority  |  task description" << endl;
		for (int i = 0; i < 25; i++) {
			if (i < 9) {
				cout << " "; cout << i + 1 << ".|   " << tasks[i].name << "    " << tasks[i].time.day << "/" << tasks[i].time.month << "/" << tasks[i].time.year << " " << tasks[i].time.hour << ":" << tasks[i].time.minutes << "          " << tasks[i].priority << "           " << tasks[i].description << endl;
			}
			else { cout << i + 1 << ".|   " << tasks[i].name << "    " << tasks[i].time.day << "/" << tasks[i].time.month << "/" << tasks[i].time.year << " " << tasks[i].time.hour << ":" << tasks[i].time.minutes << "      " << tasks[i].priority << "      " << tasks[i].description << endl; }
		}
		cout << "Press X for exit: "; cin >> answer; if (answer == char(88) || answer == char(120)) { exit_but++; }
	}

}

void add_new_task() {
	system("cls");
	cout << "Task name: "; cin.ignore(); getline(cin, tasks[*tc].name); cout << endl; system("cls");
	cout << "Enter deadline(DD/MM/YY HH:MM): "; cin >> tasks[*tc].time.day; cout << "/"; cin >> tasks[*tc].time.month; cout << "/"; cin >> tasks[*tc].time.year; cout << " "; cin >> tasks[*tc].time.hour; cout << ":"; cin >> tasks[*tc].time.minutes; cout << endl; system("cls");
	cout << "Priritize your task(1-10): "; cin >> tasks[*tc].priority; cout << endl; system("cls");
	cout << "Add your task description: "; cin.ignore(); getline(cin, tasks[*tc].description); cout << endl; system("cls");
	task_count++;
}

void edit_task() {
	int answer_for_edit, n;
	char edit_stat;
	system("cls");
	cout << "To do list" << endl;
	cout << "num|  task name |      time       |  priority  |  task description" << endl;
	for (int i = 0; i < 25; i++) {
		if (i < 9) {
			cout << " "; cout << i + 1 << ".|   " << tasks[i].name << "    " << tasks[i].time.day << "/" << tasks[i].time.month << "/" << tasks[i].time.year << " " << tasks[i].time.hour << ":" << tasks[i].time.minutes << "          " << tasks[i].priority << "           " << tasks[i].description << endl;
		}
		else { cout << i + 1 << ".|   " << tasks[i].name << "    " << tasks[i].time.day << "/" << tasks[i].time.month << "/" << tasks[i].time.year << " " << tasks[i].time.hour << ":" << tasks[i].time.minutes << "      " << tasks[i].priority << "      " << tasks[i].description << endl; }
	} 
	cout << "Select what task to edit: "; cin >> n;
	system("cls");
	cout << "num|  task name |      time       |  priority  |  task description" << endl;
		if (n < 9) {
			cout << " "; cout << n << ".|   " << tasks[n-1].name << "    " << tasks[n-1].time.day << "/" << tasks[n-1].time.month << "/" << tasks[n-1].time.year << " " << tasks[n-1].time.hour << ":" << tasks[n-1].time.minutes << "      " << tasks[n-1].priority << "      " << tasks[n-1].description << endl;
		}
		else { cout << n << ".|   " << tasks[n-1].name << "    " << tasks[n-1].time.day << "/" << tasks[n-1].time.month << "/" << tasks[n-1].time.year << " " << tasks[n-1].time.hour << ":" << tasks[n-1].time.minutes << "      " << tasks[n-1].priority << "      " << tasks[n-1].description << endl; }
		cout << endl; cout << "What would you like to edit? " << endl << "1. name" << endl << "2. time" << endl << "3. priority" << endl << "4. task description"<<endl<<"5. recreate"<<endl<<"6. cancel"<<endl; cin >> answer_for_edit;
		switch (answer_for_edit) {
		case 1:
			system("cls");
			cout << "Task name: "; cin.ignore(); getline(cin, tasks[n - 1].name); cout << endl; system("cls");
			break;
		case 2: 
			system("cls");
			cout << "Enter deadline(DD/MM/YY HH:MM): "; cin >> tasks[n - 1].time.day; cout << "/"; cin >> tasks[n - 1].time.month; cout << "/"; cin >> tasks[n - 1].time.year; cout << " "; cin >> tasks[n - 1].time.hour; cout << ":"; cin >> tasks[n - 1].time.minutes; cout << endl; system("cls");
			break;
		case 3:
			system("cls");
			cout << "Priritize your task(1-10): "; cin >> tasks[n - 1].priority; cout << endl; system("cls");
			break;
		case 4:
			system("cls");
			cout << "Add your task description: "; cin.ignore(); getline(cin, tasks[n - 1].description); cout << endl; system("cls");
			break;
		case 5: 
			system("cls");
			cout << "Task name (press X to skip, Y to edit): "; cin >> edit_stat; if (edit_stat == char(88) || edit_stat == char(120)) { system("cls"); cout << "skipped"; Sleep(3000); system("cls"); }else { cin.ignore(); getline(cin, tasks[n - 1].name); cout << endl; system("cls"); }
			cout << "Enter deadline (press X to skip, Y to edit) (DD/MM/YY HH:MM): "; cin >> edit_stat; if (edit_stat == char(88) || edit_stat == char(120)) { system("cls"); cout << "skipped"; Sleep(3000); system("cls"); } else { cin >> tasks[n - 1].time.day; cout << "/"; cin >> tasks[n - 1].time.month; cout << "/"; cin >> tasks[n - 1].time.year; cout << " "; cin >> tasks[n - 1].time.hour; cout << ":"; cin >> tasks[n - 1].time.minutes; cout << endl; system("cls"); }
			cout << "Priritize your task (press X to skip, Y to edit) (1-10): "; cin >> edit_stat; if (edit_stat == char(88) || edit_stat == char(120)) { system("cls"); cout << "skipped"; Sleep(3000); system("cls"); }else { cin >> tasks[n - 1].priority; cout << endl; system("cls"); }
			cout << "Add your task description (press X to skip, Y to edit): "; cin >> edit_stat; if (edit_stat == char(88) || edit_stat == char(120)) { system("cls"); cout << "skipped"; Sleep(3000); system("cls"); } else { cin.ignore(); getline(cin, tasks[n - 1].description); cout << endl; system("cls"); }
			break;
		case 6:
			system("cls");
			break;
		}
}

void selection() {
	int a, b = 0, j=0, show_list[100], number = 0;
	string name; int counter = 0;

	cout << "What do you search?" << endl;
	cout << "1. name" << endl << "2. date (closest)" << endl << "3. priority" <<endl<< "4. description key-values" << endl;
	cin >> a;
	while (b == 0) {
		switch (a) {
		case 1:
			//search by name
			system("cls");
			cout << "Select what priority are you intrested in: "; cin >> name;
			for (int i = 0; i < 999; i++) {
				if (tasks[i].name == name) {
					show_list[number] = i;
					number++;
				}
			}
			system("cls");
			cout << "To do list" << endl;
			cout << "num|  task name |      time       |  priority  |  task description" << endl;
			for (int i = 0; i < 25; i++) {
				j = show_list[i];
				if (i < 9) {
					cout << " "; cout << j + 1 << ".|   " << tasks[j].name << "    " << tasks[j].time.day << "/" << tasks[j].time.month << "/" << tasks[j].time.year << " " << tasks[j].time.hour << ":" << tasks[j].time.minutes << "          " << tasks[j].priority << "           " << tasks[j].description << endl;
				}
				else { cout << j + 1 << ".|   " << tasks[j].name << "    " << tasks[j].time.day << "/" << tasks[j].time.month << "/" << tasks[j].time.year << " " << tasks[j].time.hour << ":" << tasks[j].time.minutes << "      " << tasks[j].priority << "      " << tasks[j].description << endl; }
			}
			break;
		case 2:
			//search by closest execution date
			system("cls");
			cout << "Enter deadline(DD/MM/YY HH:MM): "; cin >> dates_select[counter].day; cout << "/"; cin >> dates_select[counter].month; cout << "/"; cin >> dates_select[counter].year; cout << " "; cin >> dates_select[counter].hour; cout << ":"; cin >> dates_select[counter].minutes; cout << endl; system("cls");
			system("cls");
			cout << "To do list" << endl;
			cout << "num|  task name |      time       |  priority  |  task description" << endl;
			for (int j = 0; j < 1000; j++) {
				if (dates_select[counter].day == tasks[j].time.day && dates_select[counter].month == tasks[j].time.month && dates_select[counter].year == tasks[j].time.year && dates_select[counter].hour == tasks[j].time.hour && dates_select[counter].minutes == tasks[j].time.minutes) {
					if (j < 9) {
						cout << " "; cout << j + 1 << ".|   " << tasks[j].name << "    " << tasks[j].time.day << "/" << tasks[j].time.month << "/" << tasks[j].time.year << " " << tasks[j].time.hour << ":" << tasks[j].time.minutes << "          " << tasks[j].priority << "           " << tasks[j].description << endl;
					}
					else { cout << j + 1 << ".|   " << tasks[j].name << "    " << tasks[j].time.day << "/" << tasks[j].time.month << "/" << tasks[j].time.year << " " << tasks[j].time.hour << ":" << tasks[j].time.minutes << "      " << tasks[j].priority << "      " << tasks[j].description << endl; }
				}
			}
			break;
		case 3:
			//search by priority
			system("cls"); int c;
			cout << "Select what priority are you intrested in: "; cin >> c;
			for (int i = 0; i < 999; i++) {
				if (tasks[i].priority == c) {
					show_list[number] = i;
					number++;
				}
			}
			system("cls");
			cout << "To do list" << endl;
			cout << "num|  task name |      time       |  priority  |  task description" << endl;
			for (int i = 0; i < 25; i++) {
				j = show_list[i];
				if (i < 9) {
					cout << " "; cout << j + 1 << ".|   " << tasks[j].name << "    " << tasks[j].time.day << "/" << tasks[j].time.month << "/" << tasks[j].time.year << " " << tasks[j].time.hour << ":" << tasks[j].time.minutes << "          " << tasks[j].priority << "           " << tasks[j].description << endl;
				}
				else { cout << j + 1 << ".|   " << tasks[j].name << "    " << tasks[j].time.day << "/" << tasks[j].time.month << "/" << tasks[j].time.year << " " << tasks[j].time.hour << ":" << tasks[j].time.minutes << "      " << tasks[j].priority << "      " << tasks[j].description << endl; }
			}
			break;
		case 4:
			//exit
			b++;
			break;
		}
	}
}

int main()
{
	while (true) {
		switch (welcommen()) {
		case 1:
			show_todolist();
			break;
		case 2:
			add_new_task();
			break;
		case 3:
			edit_task();
			break;
		case 4:
			selection();
			break;
		default:
			show_todolist();
		}
	}
}