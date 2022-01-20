#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int a[31], summ_count = 0, count_of_ind = 0, count_of_stable = 0, count_of_unstable = 0, max_count = 0;
	
	for (int i = 0; i < 31; i++) {
		a[i] = rand() % 10 + 1;
		cout << "В день " << i << " было сотрудников: " << a[i] << endl;
		summ_count += a[i];
		if (a[i] > max_count) { max_count = a[i]; }
	}
	
	cout << "Сумма всех побывавших строителей: " << summ_count << endl;
	
	count_of_stable = summ_count / 27;
	cout << "stable: " << count_of_stable << endl;
	count_of_unstable = summ_count % 27;
	cout << "unstable days: " << count_of_unstable << endl;
	count_of_ind = count_of_stable + count_of_unstable + 1;
	cout << "summary employees: " << count_of_ind << endl;

	return 0;
}