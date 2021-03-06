#include <iostream>
#include <ctime>

#include "s_list.h"
using namespace std;

/*
    vector - better for searching systems
    list - better for operations systems

int main()
{
    vector<array<int, 0xFFFFFFF>> vs; // list is better then vector because of no operations, just changing links
}
*/

int main() {
	srand(time(0));

	s_list<int> first;
	int size = rand() % 20;
	for (int i = 0; i < size; i++)
		first.add_to_head(rand() % 100);
	first.show();

	//first.delete_from_head();
	//first.delete_from_tail();
	//first.show();

	//s_list<int> second;
	//size = rand() % 20;
	//for (int i = 0; i < size; i++)
	//	second.add_to_head(rand() % 10);
	//second.show();

	//second.add_to_tail(rand() % 10);
	//second.show();

	//s_list<int> third(second);
	//third.show();

	//s_list<int> fourth;
	//fourth = first;
	//fourth.show();

	first.sort();
	first.show();

	//first.reverse();
	//first.show();

	//size = fourth.size();
	//for (int i = 0; i < size; i++) {
	//	int value = fourth[i];
	//	//cout << value << " ";
	//}
	//cout << endl;

	//first.delete_at(3);
	//first.show();

	//first.insert_at(4, 4);
	//first.show();

	//first.delete_all();
	//first.show();

	//first.splice(third);
	//first.show();
	//first.splice(fourth);
	//first.show();

	//size_t result = first.find(10);
	//if (result != 0)
	//	cout << "The number ten is in position: " << result << endl;
	//else
	//	cout << "Numbers ten not found" << endl;

	//first.find_and_replace(10, 1000);

	//for (auto it = first.begin(); it != first.end(); ++it)
	//	cout << *it << " ";

	return 0;
}