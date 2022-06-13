#pragma once
#include <iostream>

class record
{
	size_t number;
	std::string name;
	size_t count;
	double cost_one;
	double cost_all;
public:
	record();
	record(std::string str);

	size_t get_product_number();
	std::string get_product_name();
	size_t get_product_count();
	double get_single_product_cost();
	double get_whole_product_cost();
};

