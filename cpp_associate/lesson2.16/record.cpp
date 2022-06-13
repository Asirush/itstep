#include "record.h"

record::record()
{
	number = 0;
	count = 0;
	cost_one = 0;
	cost_all = 0;
}

record::record(std::string str)
{
	size_t SIZE = str.length();
	char* mass[255];
	for (int i = 0; i < SIZE; i++) {
		mass[i] = &str[i];

	}
}
