#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	//task1 

	int N, i=1, temp, count_of_warm_days=0, coldest_day, counter=1;
	cin >> N;

	while (i<=N)
	{
		cin >> temp;
		if (temp > 0)
		{
			count_of_warm_days++;
			if (i == counter)
			{
				coldest_day = temp;
			}
			else if (temp < coldest_day) {
				coldest_day = temp;
			}
			
		}
		else {
			counter++;
		}
		i++;
	}
	cout << endl << "min_temp: " << coldest_day << endl << "warm days count: " << count_of_warm_days << endl;



	return 0;
}