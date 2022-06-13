#pragma once
#include "word.h"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

class dictionary_full
{
	std::vector<word> _library;
public:
	dictionary_full();
	dictionary_full(word a);
	size_t size();
	std::string get_translation(std::string a);
};