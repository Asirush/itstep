#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


//task 1
	int N, flag;
    cout << "Enter number of rows: ";
    cin >> N;
    cout << endl;

    for (int i = N, k = 0; i >= 1; --i, k = 0)
    {
        while (k != N - i )
        {
            cout << "  ";
            ++k;
        }

        for (flag = 2*i-1; flag >= 1; --flag)
        {
            cout << "^ ";
        }
        
        cout << endl;

    }
    
    for (int i = 1, k = 0; i <= N; ++i, k = 0)
    {
        for (flag = 1; flag <= N - i; ++flag)
        {
            cout <<"  ";
        }

        while (k != 2 * i - 1)
        {
            cout << "^ ";
            ++k;
        }
        cout << endl;
    }
    

	cout << endl;
	return 0;
}