#include <iostream>
#include "Date.h"

using namespace std;

int main() {
	Date cur(4, 5, 2017);
	Date bh(1, 2, 1999);

	cout << "Since your bday passed " << (cur - bh) << " days\n";

	cur = cur + 5;
	cur += 5;

	cur.show();	// 14.05.2017

	cin.get(); cin.get();
}