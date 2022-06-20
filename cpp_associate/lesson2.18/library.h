#pragma once
#include <vector>
#include "word_in_library.h"
#include <iostream>
#include <fstream>
#include <string>

class library
{
	std::vector<word_in_library> list_of_words;
	int guess_word_size;

public:
	library();
	library(size_t a);

 };

