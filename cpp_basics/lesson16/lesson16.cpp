#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

//task1
	/*
	int days[31], summ_count = 0, count_of_ind = 0, count_of_stable = 0, count_of_unstable = 0, max_count = 0;
//fill days
	for (int i = 1; i < 31; i++) {
		days[i] = rand() % 10 + 1;
		cout << "В день " << i << " было сотрудников: " << days[i] << endl;
		summ_count += days[i];
		if (days[i] > max_count) { max_count = days[i]; }
	}
	cout << "Сумма всех побывавших строителей: " << summ_count << endl;
	
//count employess
	count_of_stable = summ_count / 27 + 1;
	if(count_of_stable<=max_count){
		count_of_unstable = max_count;
	}
	cout << "Count of stable employees(per day): " << count_of_stable<<endl;
	cout << "Count of unstable employees: " << count_of_unstable << endl;
	
	*/
//task2
	char table[9], winner;
	char answer;

	char letters[] = "xo";
	

	cout << "table: " << endl;
	for (int i = 0; i < 9; i++) {
		table[i] = letters[rand() % 2];
		cout << table[i];
		if (i == 2 || i == 5 || i == 8) {
			cout << endl;
		}
	}
	//1 2 3
	//4 5 6
	//7 8 9

	//1-3, 1-9, 1-7
	if (table[1] == table[2] && table[2] == table[3]) {
		winner = table[1];
	}
	else if (table[1] == table[4] && table[4] == table[7]) {
		winner = table[1];
	}
	else if (table[1] == table[5] && table[5] == table[9]) {
		winner = table[1];
	}

	//7-9, 1-9, 3-9
	else if (table[7] == table[8] && table[8] == table[9]) {
		winner = table[7];
	}
	else if (table[1] == table[5] && table[5] == table[9]) {
		winner = table[1];
	}
	else if (table[3] == table[6] && table[6] == table[9]) {
		winner = table[3];
	}

	//1-7, 3-7, 7-9
	else if (table[1] == table[4] && table[4] == table[7]) {
		winner = table[1];
	}
	else if (table[3] == table[5] && table[5] == table[7]) {
		winner = table[3];
	}
	else if (table[7] == table[8] && table[8] == table[9]) {
		winner = table[7];
	}

	//1-3, 7-3, 3-9
	else if (table[1] == table[2] && table[2] == table[3]) {
		winner = table[1];
	}
	else if (table[7] == table[5] && table[5] == table[3]) {
		winner = table[3];
	}
	else if (table[3] == table[6] && table[6] == table[9]) {
		winner = table[1];
	}

	//4-5-6, 2-5-8
	else if (table[4] == table[5] && table[5] == table[6]) {
		winner = table[4];
	}
	else if (table[2] == table[5] && table[5] == table[8]) {
		winner = table[2];
	}

	//answer
	/*if (winner == 1) {
		answer = 'x';
	}
	else if (winner == 2) {
		answer = 'o';
	}*/

	cout << winner << endl;

	return 0;
}

