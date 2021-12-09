#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int N, flag, j = 0;
//task 1
    cout << "Enter number of rows: ";
    cin >> N;

    for (int i = 1, k = 0; i <= N; ++i, k = 0)
    {
        for (flag = 1; flag <= N - i; ++flag)
        {
            cout <<"  ";
        }

        while (k != 2 * i - 1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }


	cout << endl;
	return 0;
}