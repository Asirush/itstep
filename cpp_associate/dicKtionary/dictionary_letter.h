#pragma once
#include <iostream>
#include <vector>
#include "word.h"

class dictionary_letter
{
	char letter;
	std::vector<word> words_l;
public:
	dictionary_letter();
	dictionary_letter(std::string a);
};

