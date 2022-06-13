#pragma once
#include "record.h"
#include <vector>

class records
{
	std::vector<record> _records;

public:
	records();
	records(record rec);
	void add_record(record rec);
	void show();
	void show_full_price();
	void show_interval(size_t a, size_t b);
	record get_highest_cost();
	void get_started_with_letter(char a);
};

