#include <iostream>
#include <fstream>
#include <vector>
#include "record.h"
#include "records.h"

using namespace std;

int main() {
	
	records stock;
	ifstream ifs("head.dat", ios::in);
	if (!ifs.bad()) {
		char buffer[255];
		while (!ifs.eof()) {
			ifs.getline(buffer, 250);
			stock.add_record(record(buffer));
		}
		ifs.close();
	}

	stock.show_full_price();



	return 0;
}